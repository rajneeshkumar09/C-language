//Program of if else ladder
#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("Enter the marks: ");
	scanf("%d",&marks);
	if(marks>90)
	{
		printf("Grade-A");
	}
	else
	{
		if(marks>80)
		{
			printf("Grade-B");
		}
		else
		{
			if(marks>70)
			{
				printf("Grade-C");
			}
			else
			{
				printf("Grade-D");
			}
		}
	}
	getch();
}
