//Takes Nothing Returns Nothing//No Argument No Return.
#include<stdio.h>
#include<conio.h>
int main()
{
	void add();
	add();
	getch();
}
add()
{
	int a,b;
	printf("Enter any two number: ");
	scanf("%d%d",&a,&b);
	printf("Sum = %d",a+b);
}
