#include<stdio.h>
#include<conio.h>
int top= -1;
int stack[20];
int push(int*, int, int);
int pop(int*);
int display(int*);
int main()
{
	int data, ch, size;
	printf("\n  enter the size of stack: ");
	scanf("%d",&size);
	if(size>20)
	{
		printf("\n Invalid size, it can not be grater than 20.");
		return 0;
//		exit();
	}
	do
	{
		printf("\n\n Available options are as follows:");
		printf("\n\n\t Press 1 to Push an element to the stack");
		printf("\n\n\t Press 2 to Pop an element to the stack");
		printf("\n\n\t Press 3 to Quit from the application");
		printf("\n\n\t enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n\n Enter the element to Push to the stack");
				scanf("%d", &data);
				push(stack, size, data);
				printf("\n\n After performing the Push operation the stack is as follow:");
				display(stack);
				break;
			case 2:
				data=pop(stack);
				printf("\n\n the popped data is: %d", data);
				printf("\n\n after performing pop operation the stack is as follows:");
				display(stack);
				break;
			case 3:
				return 0;
		}
	}
	while(ch!=3);
	return 0;
}

int push(int*S, int size, int d)
{
	if(top==size-1)
	printf("\n stack overflow");
	else
	{
		top=top+1;
		S[top]=d;
	}
}
int pop(int*S)
{
	int popped_element;
	if(top==-1)
	{
		printf("\n stack Underflow");
		return 0;
	}
	else
	{
		popped_element=S[top];
		top--;
	}
	return popped_element;
}

int display(int s[])
{
	int i;
	if(top==-1)
	printf("\n\n Stack is empty");
	else
	{
		for(i=top; i>=0; i++)
		printf("\n%d",s[i]);
	}
}
