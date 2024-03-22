//program of conditional or ternary operator
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter any two numbers: ");
	scanf("%d%d",&a,&b);

	a>b ? printf("True") : printf("False");
	getch();
}
