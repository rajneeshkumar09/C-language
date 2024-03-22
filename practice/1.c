#include <stdio.h>
int main()
{
 	  int a,sum=0,i; 
 	  float avg;
 	  printf("Enter Ten Numbers: \n");
 	  for(i=0;i<10;i++)
 		{
 			scanf("%d",&a);
 			sum=sum+a;
		 }
	avg=sum/10.0;
	printf("Avrage value=%0.3f",avg);
	return(0);
}
