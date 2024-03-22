#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
 textbackground(10);
 int i;
 textcolor(4+BLINK);
 for(i=1;i<=166;i++)
 {
  cprintf("I LOVE YOU \3");
  delay(150);
  }
  getch();
}