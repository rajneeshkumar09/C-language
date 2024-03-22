//program of increment and decrement operator(Unary Operator)
#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("enter a number: ");
	scanf("%d",&x);
	x++; //x=x+1   post increment
	printf("%d\n",x);
	++x;  //x=x+1    pre increment
	printf("%d\n",x);
    x--;  //x=x-1  post decrement
	printf("%d\n",x);
	--x;  //x=x-1  pre decrement
	printf("%d\n",x);
    getch();
}
