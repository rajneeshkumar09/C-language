//sum of any two number
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2, result;
	printf("Enter any two number : ");
	scanf("%d %d",&num1,&num2);
	result = num1 + num2 ;
	printf("%d + %d = %d",num1,num2,result);
	getch();
}
