//Extended concept of pointers
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,*p,**q,***r;
	p=&x;
	q=&p;
	r=&q;
	printf("Enter a number :x=");
	scanf("%d",&x);
	printf("%d\n%d\n%d\n",p,q,r);

	printf("Enter another number : ");
	scanf("%d",&y);
	**q=y;
	printf("Now x=%d",**q);
	getch();
}

/*Level of pointer is equal to the number of Astrics(*).
which level have pointer variable than it contain the address of less than one level to itself.
reading style--
about x || x is in int.
about *p || p is a pointer to an int.
about **q || q is a pointer to a pointer to an int.
about ***r || r is a pointer to a pointer to a pointer to an int. */

