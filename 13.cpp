//Program of Compound Assignment Operator
#include<stdio.h>
#include<conio.h>
int main()
{
	int x, y, a;
	printf("Enter any three number: ");
	scanf("%d%d%d",&x,&a,&y);
	x+=a;
	y-=a;
	printf("\n%d\n",x);
	printf("%d\n",y);
	getch();
}
