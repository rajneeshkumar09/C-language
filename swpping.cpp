#include<stdio.h>
#include<conio.h>
main()
{
	int a, b;
	printf("Enter two number: ");
	scanf("%d%d",&a, &b);
	int raj(int,int);
	raj(a,b);
	getch();
}
raj(int x, int y)
{
	int temp;
	temp=x;   //a=a+b
	x=y;      //b=a-b
	y=temp;   //a=a-b
	printf("After swpping x=%d and y=%d",x,y);
}
