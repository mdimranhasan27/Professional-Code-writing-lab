#include<stdio.h>
int main()
{
int i,sum=0;
float avg;
int a[10];
for(i=0;i<10;i++)
{scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=(float)sum/10;
printf("%0.3f",avg);
return 0;
}
