//Program of switch control Instruction
#include<stdio.h>
#include<conio.h>
int main()
{
	int choice, a, b, s;
	while(1)
 	{
	printf("\n1. Addition");
	printf("\n2. Odd Even");
	printf("\n3. printing first n natural number");
	printf("\n4. Exit");
	
	printf("\n\n Enter your choice ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter two number: ");
			scanf("%d%d",&a,&b);
			s=a+b;
			printf("\n sum is %d",s);
			break;
		case 2:
			printf("Enter any number: ");
			scanf("%d",&a);
			if(a%2==0)
			printf("Number is Even");
			else
			printf("Number is odd");
			break;
		case 3:
			printf("Enter any number: ");
			scanf("%d",&a);
			for(b=1;b<=a;b++)
			printf("%d\t",b);
			break;
		case 4: return(0);
			default: 
		    printf("Invalid choice");
	}
	getch();
}
}
