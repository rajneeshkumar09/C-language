#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j>=4-i&&j<=3+i)
			{
				printf("*");
				j++;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return(0);
}
	
