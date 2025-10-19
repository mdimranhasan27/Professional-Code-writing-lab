#include<stdio.h>

#define STUDENTS 3 	//Total number of students
#define SUBJECTS 3 	//Total number of subjects

//function calculate average marks of students
float calculateAverage(int marks[], int subjectCount) {
    int sum = 0;
    for (int i = 0; i < subjectCount; i++) {
        sum += marks[i];
    }
    return sum / (float)subjectCount; // return average marks
}

//function determine grade 

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

//function to find the topper
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
	//students marks
	int marks[STUDENTS][SUBJECTS]={ 			
				{50,60,70},
				{80,90,100},
				{30,40,50} };
	//students names
	char name[STUDENTS][10]={"Ali","Bob","Cat"};
	int i,j;
	float average;
	//output in table format
	 printf("=========================================\n");
    	 printf("          STUDENT GRADES REPORT          \n");
    	 printf("=========================================\n");
   	 printf("%-10s %-10s %-10s\n", "Name", "Average", "Grade");
   	 printf("-----------------------------------------\n");
	
	//print student name,grade,average marks
	for(i=0;i<STUDENTS;i++){
		average =  calculateAverage(marks[i], 3);
		char grade = getGrade(average);
		printf("%-10s %-10.2f %-10c\n", name[i], average, grade);
	}
        //find and print topper
	int topperIndex = findTopper(marks);
       	int topperTotal = 0;
   	 for (int j = 0; j < SUBJECTS; j++)
      		  topperTotal += marks[topperIndex][j];
 	
	printf("-----------------------------------------\n");
        printf("Topper: %s with total marks = %d\n", name[topperIndex], topperTotal);
        printf("=========================================\n");


	return 0;
}
	

