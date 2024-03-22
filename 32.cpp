//Basic of pointer
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,*j;
	j=&x;
	printf("Enter a number : ");
	scanf("%d",&x);
	printf("%d\n%u",x,j);
	printf("\n%d\n%d",&x,*&x);
	printf("\n%d\n%u",&x,*j);
	printf("\n%u",*&j);
	getch();
}
