#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10], i, n, lb=0, ub=9, mid;
	printf("Enter ten numbers: ");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter any number: ");
	scanf("%d",&n);
	mid=(lb+ub)/2;
	while(lb<=ub)
	{
		if(a[mid]<n)
		lb=mid+1;
		else if(a[mid]==n)
		{
			printf("no of found at %d",mid+1);
			break;
		}
		else
		{
			ub=mid-1;
		}
		mid=(lb+ub)/2;
	}
	if(lb>ub)
	printf("no is not found in series.");
	getch();
}
