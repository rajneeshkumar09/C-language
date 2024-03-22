//Take Nothing Returns Something ||No Aurgument With Return.
#include<stdio.h>
#include<conio.h>
int raj(void);    //Global Decleration  : void may be use or not
int main()
{
	int s;
	//int raj();    //Local Decleration
	s=raj();   //Actual Arguments   : Call by value(fxn call by passing value)
	printf("Sum is %d",s);
	getch();
}
raj()    //Formal Arguments
{
	int a,b,c;
	printf("Enter two number: ");

	scanf("%d%d",&a,&b);
	c=a+b;   //we can use same variable from main function.
	return(c);
}
