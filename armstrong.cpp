//WAP to check the given no is armstrong or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, r, s=0, temp;
	printf("Enter a number");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		r=temp%10;
		s=s+(r*r*r);
		temp=temp/10;
		
	}
	if(s==n)
	{
		printf("Armstrong number is %d", n);
	}
	else
	{
		printf("Number is not Armstrong number");
	}
	getch();
} 
