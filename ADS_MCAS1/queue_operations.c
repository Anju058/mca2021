#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int queue[MAX],front=-1,rear=-1;

void enqueue()
{
	
	int item;
	
	if(rear==MAX-1)
		printf("\nQueue is Overflow!!!");

	else
	{
		
		printf("\nEnter the element to be inserted on a queue");
		scanf("%d",&item);
		
	
		if(front==-1)
			front=0;
			
		rear+=1;
		queue[rear]=item;
		
	}
		
}


void dequeue()
{

	if(front==-1 || front>rear)
		printf("\nQueue is Underflow!!!");
	else
	{
		printf("\nElement deleted is %d",queue[front]);
		front+=1;
		
		if(front==MAX)
			front=rear=-1;
	}

}

void traversal()
{

	int i;
	
	printf("\n Elements on the queue are:"); 
	for(i=front;i<=rear;i++)
		printf("%d\t",queue[i]);
		
}


void main()
{
	int choice;
	
	while(1)
	{
	
		printf("\n1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Traversal\n");
		printf("4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:enqueue();
			       break;
			case 2:dequeue();
			       break;
			case 3:traversal();
			       break;
			case 4:exit(0);
			       break;
			default:printf("Wrong choice!!!");
		}
	}
}
