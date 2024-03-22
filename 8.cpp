//program of Relational operater
#include<stdio.h>
#include<conio.h>
int main()
{
	int x, y, z, u, v, a, b, c;
	printf("Enter any three number: ");
	scanf("%d%d%d",&a,&b,&c);
	x=a>b,	y=a<b,  z=a!=b, u=a==b, v=a<b<c;
	printf("%d\n%d\n%d\n%d\n%d\n",x,y,z,u,v);
	/*printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
	printf("%d\n",u);
	printf("%d\n",v);*/
	getch();
}
