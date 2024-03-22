//Takes something Return something ||Aurgument With Return.
#include<stdio.h>
#include<conio.h>

int main()
{
	int x, y, s;
	int add(int,int);
	printf("Enter any two numbers: ");
	scanf("%d%d",&x,&y);
	s=add(x,y);
	printf("Sum is %d",s);
	getch();
}
add(int a, int b)
{
	int c;
	c=a+b;
	return(c);
}
