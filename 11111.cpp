#include<stdio.h>
#include<conio.h>
int main()
{
	char gen[4], qual[2];
	int choice, yos, sal;
		printf("Enter the gender : ");
		scanf("%s",&gen);
		printf("Enter the qualification (pg = post graduate\t g = graduate) : ");
		scanf("%s",&qual);
		printf("Enter the year of service : ");
		scanf("%d",&yos);
	printf("\n Choice is 1 or 2\n");	
	printf("Enter your choice");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			if(gen=="male")
			{
				if(yos>=10&&qual=="pg")
				{
				sal=11000;
				printf("salary = %d\n",sal);
				break;
				}
			else if(yos>=10&&qual=="g")
				{
				sal=9000;
				printf("salary = %d\n",sal);
				break;
				}
			else if(yos<10&&qual=="pg")
				{
				sal=10000;
				printf("salary = %d\n",sal);
				break;
				}
			else if(yos<10&&qual=="g")
				{
				sal=7000;
				printf("salary = %d\n",sal);
				break;
				}
			}
		case 2:
			if(gen=="female")
			{
				if(yos>=10&&qual=="pg")
				{
				sal=11000;
				printf("salary = %d\n",sal);
				break;
				}
				if(yos>=10&&qual=="g")
				{
				sal=9000;
				printf("salary = %d\n",sal);
				break;
				}
				if(yos<10&&qual=="pg")
				{
				sal=10000;
				printf("salary = %d\n",sal);
				break;
				}
				if(yos<10&&qual=="g")
				{
				sal=7000;
				printf("salary = %d\n",sal);
				break;
				}
			}
	}
	getch();
}
