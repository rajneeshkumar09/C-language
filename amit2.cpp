#include<stdio.h>
#include<conio.h>
int main()
{
	char gen[4], qual[2];
	int yos, sal;
	printf("Enter the gender : ");
	scanf("%s",&gen);
	printf("Enter the qualification (pg = post graduate\t g = graduate) : ");
	scanf("%s",&qual);
	printf("Enter the year of service : ");
	scanf("%d",&yos);
	if(gen=="male"&&yos>=10&&qual=="pg")
		{
		sal=11000;
		printf("salary = %d\n",sal);
		}
	/*	if(yos>=10&&qual=="pg")
		{
			sal=11000;
		}
		else if(yos>=10&&qual=="g")
		{
			sal=10000;
		}
		else if(yos<10&&qual=="pg")
		{
			sal=10000;
		}
		else if(yos<10&&qual=="g")
		{
			sal=7000;
		} */
	
	/*if(gen=="female")
	{
		if(yos>=10)
		{
			printf("salary = %d\n",sal);
		}
		if(yos>=10)
		{
			printf("salary = %d\n",sal);
		}
		if(yos<10)
		{
			printf("salary = %d\n",sal);
		}
		if(yos<10)
		{
			printf("salary = %d\n",sal);
		}
	}*/
	getch();
}
