#include<stdio.h>
#include<conio.h>
#include<windows.h>
/*void gotoxy(int x , int y)
	{
		COORD c;
		c.X=x; c.Y=y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c) ;
	}*/
int main()
{
	//gotoxy(20,8);
	COORD c;
	c.X=20; c.Y=8;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c) ;
	printf("Hello");
	getch();
}
