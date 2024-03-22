#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][4],b[4][4],c[4][4],m,n,i,j;
	printf("Enter the num's of row of matrix\n");
	scanf("%d",&m);
	printf("Enter the num's of columns of matrix\n");
	scanf("%d",&n);
	printf("Enter nine numbers of 1st matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter nine numbers of 2nd matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("sum of matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{ 
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
