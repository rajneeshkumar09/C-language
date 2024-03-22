//Array   : program to find the avrage of numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10], i, sum=0;
	float avg;
	printf("Enter Ten Numbers: ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/10.0;
	printf("Avrage is %0.3f",avg);
	getch();
}
