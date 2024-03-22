//Takes Something Returns Nothing || Argument No Return.
#include<stdio.h>
#include<conio.h>
//void raj(int,int);    //Global Decleration
int main()
{
	int x,y;
	printf("Enter any two number: ");
	scanf("%d%d",&x,&y);
	
	void raj(int,int);    //Local Decleration
	raj(x,y);   //Actual Arguments   : Call by value(fxn call by passing value)
	getch();
}
raj(int a,int b)    //Formal Arguments
{
	int c;
	/*printf("Enter a number: ");
	scanf("%d",&a);
	if(a%2==0)
	  printf("Number is even.\n");
	else
	  printf("Number is odd.\n"); */
	  c=a+b;   //we can use same variable from main function.
	  printf("sum is %d",c);
}
