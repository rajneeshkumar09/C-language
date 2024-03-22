#include<stdio.h>
#include<conio.h>
int main()
{
	int h,e,m,p,c,aggr;
	float per;
	printf("enter marks");
	scanf("%d%d%d%d%d",&h,&e,&m,&p,&c);
	aggr=h+e+m+p+c;
	per=aggr/5;
	printf("aggr marks = %d\n",aggr);
	printf("percentage = %0.2f\n",per);
	getch();
}
