//program of multiplication of three matrix using array.
#include<stdio.h>
#include<conio.h>
//#include<stdlib.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],d[5][5],e[5][5],i,j,k,l,m,n;
    
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
     
	printf("Enter the elements of Third matrix :-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
			scanf("%d",&d[i][j]);
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
	for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {	
        	c[i][j]+=a[i][k]*b[k][j]; e[i][j]=0;
        	for(l=0;l<m;l++)	
	  		 {
			 e[i][j]+=c[i][l]*d[l][j];
   			 }
		}
	} 
	printf("Multiplication of Two matrix :-\n");
	for(i=0; i<n;i++)
    {
        for(j=0;j<m;j++)
        {  
       		printf("%d\t",e[i][j]);
		}
		printf("\n");
	} 
	getch();
}
