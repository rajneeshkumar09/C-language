//program of if Decision control instruction
#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter any number: ");
	scanf("%d",&x);
	if(x>0)
	{
		printf("Positive Number");
	}
	if(x<=0)
	{
		printf("Negative Number");
	}
	getch();
}
