#include<stdio.h>
int main()
{
	int marks[3][3]={ 			
				{50,60,70},
				{80,90,100},
				{30,40,50} };

	char name[3][10]={"Ali","Bob","Cat"};
	int i,j,sum;
	float average;
	for(i=0;i<3;i++){
		sum = 0;
		for(j=0;j<3;j++){
			sum+=a[i][j];
		}
		average = s/3.0;
		if(average >= 80)
				printf("%s Grade A average=%.2f\n",n[i],average);
		else if(average>=60) 
				printf("%s Grade B average=%.2f\n",n[i],average);
		else if(average>=40) 
				 printf("%s Grade C average=%.2f\n",n[i],average);
		else 
				 printf("%s Fail average=%.2f\n",n[i],average);
	}

	int max=0,position=0;
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			 sum+=a[i][j];
	}
	if(sum>max){
			max=sum;
			position=i;
	}
	}
	printf("Topper: %s with total %d\n",n[position],max);
	return 0;
}
	

