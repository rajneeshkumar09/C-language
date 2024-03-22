//toggel case
#include<stdio.h>
#include<conio.h>
int main()
{
	char str[20];
	int i;
	printf("Enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&& str[i]<='z')
		str[i]-=32;
		else if(str[i]>='A'&& str[i]<='Z')
		str[i]+=32;
	}
	printf("Change String = %s",str);
	getch();
}
