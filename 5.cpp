//program of sizeof() operater
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,v,n; 
	n=sizeof('a');
	x=sizeof(int), y=sizeof(float),z=sizeof(char), v=sizeof(double);
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
	printf("%d\n",v);
	printf("%d\n",n);
	getch();
}
