#include<stdio.h>
#include<conio.h>
main()
{
	int area();
	area();
	getch();
}
void area()
{
	int b, h, ar;
	printf("enter height: ");
	scanf("%d",&h);
	printf("enter base: ");
	scanf("%d",&b);
	ar=(b*h)/2;
	printf("Area is %d",ar);
}
