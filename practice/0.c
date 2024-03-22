#include<stdio.h>
int main()
{
	int i=0;
	while(1)
	{
		printf("%d\n",i);      //infinte loop
		i++;
	}
	return(0);
}


/*int main()
{
	int x=10, y=20,z;
	for(z=0,z<y;z++)
	{
		if(z==x)
		{
			printf("%d\n",z);
		}
		else
		{
			break;
		}
	}
}*/


/*int main()
{
	int x=10, y=3, z;
	for(z=0;z<x;)
	z=z++ +y;
	printf("%d\n",z);             //output=12
	return(0);
}*/


/*int main()
{
	for(int i=0;1;i++)
	{
		printf("%d\n"i);
	}
	return 0;
}*/
