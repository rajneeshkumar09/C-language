#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float cal, fah;
	printf("enter temp in fahrenheit");
	scanf("%f",&fah);
	cal=(fah-32)*5/9;
	printf("\n%f",cal);
	getch();
}

