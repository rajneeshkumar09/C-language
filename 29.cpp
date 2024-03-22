//program of string and some knowledge of string
#include<stdio.h>
#include<conio.h>
int main()
{
	char s[20];   //s[20]={'H','e','l','l','o','\0'};   ||  "Hello";
	int i;
	printf("Enter your name: ");

	 /*scanf("%s",&s[0]); || scanf("%s",s);  //Its not take input of multiwords strings
	  (one or more than one string) because space is a dilimeter(data seprater) in eye of 
	   scanf. when we input data in scanf than scanf imagine the space tab or enter key 
	   like as dilimeter for seprate sequence of data.*/  
	gets(s);  /*for input string. ||This is access multiwords strings but sapce key is 
	           not dilimeter for this fxn or enter key is dilimeter for this fxn.
	
	 // '\0' is a null character and Null character is not printable. it's seems like space.
		
	 /*for(i=0;s[i]!='\0';i++)    //how many times loop use? for this we use (s[i]!=='\0')
	
 	printf("%c",s[i]);  //print only character  ||when a chacter will examin then loop 
	                      method will use
	
 	printf("%s",s);*/     //print only string
		puts(s);  //puts(&s[0]);   ||only for printing string
	getch();
}
