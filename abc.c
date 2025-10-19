#include<stdio.h>

#define STUDENTS 3
#define SUBJECTS 3

float calculateAverage(int marks[], int subjectCount) {
    int sum = 0;
    for (int i = 0; i < subjectCount; i++) {
        sum += marks[i];
    }
    return sum / (float)subjectCount;
}

char getGrade(float average) {
    if (average >= 80)
        return 'A';
    else if (average >= 60)
        return 'B';
    else if (average >= 40)
        return 'C';
    else
        return 'F';
}
int findTopper(int marks[STUDENTS][SUBJECTS]) {
    int topIndex = 0;
    int maxTotal = 0;

    for (int i = 0; i < STUDENTS; i++) {
        int total = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            total += marks[i][j];
        }
        if (total > maxTotal) {
            maxTotal = total;
            topIndex = i;
        }
    }
    return topIndex;
}



int main()
{
	int marks[STUDENTS][SUBJECTS]={ 			
				{50,60,70},
				{80,90,100},
				{30,40,50} };

	char name[STUDENTS][10]={"Ali","Bob","Cat"};
	int i,j;
	float average;
	for(i=0;i<STUDENTS;i++){
		average =  calculateAverage(marks[i], 3);
		char grade = getGrade(average);
		printf("%s Grade %c average=%.2f\n",name[i],grade , average);
	}

	int topperIndex = findTopper(marks);
    int topperTotal = 0;
    for (int j = 0; j < SUBJECTS; j++)
        topperTotal += marks[topperIndex][j];

    printf("\nTopper: %s with total marks = %d\n", name[topperIndex], topperTotal);

	return 0;
}
	

