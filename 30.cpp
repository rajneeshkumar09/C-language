/*related strings mainupulations
  string related functions 
    Some pre-defined function of string.
 strlen() \\In this fxn we pass arrgument or pass the address of that array in which stings\
            put. This fxn return the length of fxn. 
 strrev() \\We use this fxn for reverse of string (or return the revers of string) and it \
            takes only a single arrgument(address of string)
 strlwr() \\Uppercase character convert into lowercase character of a string
 strupr() \\lowercase character convert into uppercase character of a string
 strcpy() \\ It has two arrgument when you want to copy to string ||strcpy(s,"BHOPAL"); 
             ==s is a array in which we want to assign 'BHOPAL' in this array.
 strcmp() \\compare of two string  ==strcmp("AMAR","AMIT")  ||It is return integer type 
            value and this value is the ASCII difference of first corresponding mismatch 
			chatcher. If difference is zero then string are same nor string are not same.
 strcat() \\From this fxn we can append string. ||strcat(s,"Student");  ==hello student. (if 
            A string hello already puts in s)*/
  
  //Handling Multiple Strings
  
  #include<stdio.h>
  #include<conio.h>
  int main()
  {
  	char s[3][10];
  	int i;
  	printf("Enter three strings: ");
  	for(i=0;i<=2;i++)
	  gets(s[i]);   //gets(&s[i][0]);
	for(i=0;i<=2;i++)
	  printf("%s\n",s[i]);
	  getch();
  }
