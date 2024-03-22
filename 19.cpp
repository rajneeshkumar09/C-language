//program of break 
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1, n;
		printf("Enter any number: ");
		scanf("%d",&n);
	while(i<=n)
	{
	
		if(n%2==0)
		break;
		i++;
	}
	i==n+1 ? printf("ends normally") : printf("appliedbreak");
	
	getch();
}
