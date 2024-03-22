//program of multiplication of two matrix using array.
#include<stdio.h>
#include<conio.h>
//#include<stdlib.h>
int main()
{
    int a[4][4],b[4][4],c[4][4],i,j,k,m,n;
    
	//system("cls");
	printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of columns : ");
    scanf("%d",&m);
    
	printf("Enter the elements of first matrix :-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        	scanf("%d",&a[i][j]);
		}
    }
    
	printf("Enter the elements of second matrix :-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
			scanf("%d",&b[i][j]);
    	}
	}
    
	for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {	
        	c[i][j]=0;
        	for(k=0;k<m;k++)	
	  		 {
			 c[i][j]+=a[i][k]*b[k][j];
   			 }
		}
	} 
	printf("Multiplication of Two matrix :-\n");
	for(i=0; i<n;i++)
    {
        for(j=0;j<m;j++)
        {  
       		printf("%d\t",c[i][j]);
		}
		printf("\n");
	} 
	getch();
}
