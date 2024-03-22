//Program of function   (User define function program)
#include<stdio.h>
#include<conio.h>
int main()
{
	void add();
	void even();
	add();
	even();
	add();
	getch();
}
//user defined function
add()
{
	int a, b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	printf("sum is %d\n",a+b);
}
even()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a%2==0)
	printf("Number is even.\n");
	else
	printf("Number is odd.\n");
}
