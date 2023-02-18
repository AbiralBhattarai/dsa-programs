#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int q[MAXSIZE],front=0,rear=-1;
int isfull()
{
	if(rear==MAXSIZE-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(front==rear+1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void enq(int a)
{
	if(isfull())
	{
		printf("queue full\n");
	}
	else
	{
		rear++;
		q[rear]=a;
		printf("%d enqueued\n",a);
	}
}
void deq()
{
	if(isempty())
	{
		printf("queue empty\n");
	}
	else
	{
		printf("%d dequeued\n",q[front]);
		front++;
	}
}
void display()
{
	int i;
	if(isempty())
	{
		printf("queue empty\n");
	}
	else
	{
		printf("Queue is : \n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",q[i]);
		}
		printf("\n");
	}
}
void main()
{
	deq();
	enq(2);
	enq(3);
	display();
	enq(10);
	display();
	deq();
	deq();
	display();
}
