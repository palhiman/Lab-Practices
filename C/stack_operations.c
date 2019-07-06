/*
 * Program to illustrate the operations performed on stack.
 */

#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
#define MAXSIZE 20

void push();
int pop();
void traverse();
int stack[MAXSIZE];
int top = -1;

void main()
{
	int choice;
	char ch;
	do
	{
		printf("***Operations of Stack***\n");
		printf("\n1.PUSH\n2.POP\n3.TRAVERSE\n");
		printf("Enter your choice:");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1: //call push function
				push();
				break;
			case 2: //call pop function
				printf("\nThe deleted element is %d", pop());
				break;
			case 3://Traverse the stack
				traverse();
				break;
			default : printf("\nTry again. You entered wrong choice...");
		}
		printf("\nDo you want to continue[Y/n]:");
		scanf("%c", &ch);
	}
	while(ch == 'Y' || ch == 'y');

}

// Push definition
void push()
{
	int item;
	if( top == MAXSIZE-1)
	{
		printf("\nThe stack is Full...");
		exit(0);
	}
	else
	{
		printf("\nEnter the element to be entered:");
		scanf("%d", &item);
		top += 1;
		stack[top] = item;
	}
}

// Pop definition
int pop()
{
	int item;
	if(top == -1)
	{
		printf("\nThe stack is Empty...");
		exit(0);
	}
	else
	{
		item = stack[top];
		top = top - 1;
	}
	return (item);
}

// Traversal definition
void traverse()
{
	int x;
	if(top == -1)
	{
		printf("\nThe stack is empty, so cannot be traversed....");
		exit(0);
	}
	else
	{
		for(x=top; x>=0; x--)
		{
			printf("\nTraverse the element:");
			printf("\n%d", stack[x]);
		}
	}
}


							
