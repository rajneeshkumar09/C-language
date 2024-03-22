//program of adding two matrix using array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of colums : ");
    scanf("%d",&m);
    printf("Enter the elements of first matrix : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
        printf("Enter the elements of second matrix : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&b[i][j]);
    }
    
	
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
       {
	   c[i][j]=a[i][j]+b[i][j];
       
		}
	} for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
       {
	   
       printf("%d\t",c[i][j]);
		}
		printf("\n");
	}  
	getch();
}
