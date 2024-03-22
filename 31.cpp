//basic of pointer

#include<stdio.h>
#include<conio.h>
int main()
{
	int x,*j;
	j=&x;
	printf("Enter any number : ");
	scanf("%d",&x);
	printf("%d\n%u",x,j);
	printf("\n%d",&x);
	printf("\n%d",*&x);
    printf("\n%d\n%u",*j,&x);
	printf("\n%u",*&j);
	getch();
}

