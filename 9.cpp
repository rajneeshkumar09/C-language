//program of logical operator
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,u;
    printf("Enter a number: ");
    scanf("%d",&x);
	y=!x>4, z=x>4&&x<10, u=x<4||x>10; //!x=0
	printf("%d\n",y);
	printf("%d\n",z);
	printf("%d\n",u);
	getch();
}
