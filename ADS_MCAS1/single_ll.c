#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
	
}*root=NULL;

void insertatbegin()
{

	struct node *temp;
	
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n Enter the data to be inserted");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)
		root=temp;
	else
	{
		temp->link=root;
		root=temp;
	}

}

void insertatend()
{

	struct node *temp;
	
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n Enter the data to be inserted");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)
		root=temp;
	else
	{
		
		struct node *p=root;
		while(p->link!=NULL)
			p=p->link;
		
		p->link=temp;
	}

}

int length()
{
	
	struct node *p=root;
	int count=0;
	
	if(root==NULL)
		return count;
	else
	{
		while(p!=NULL)
		{
			count++;
			p=p->link;
		}
		return count;
	}

}
		
void insertatpos()
{

	int pos;
	struct node *temp;
	
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n Enter the data to be inserted");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	printf("\n Enter position to be inserted");
	scanf("%d",&pos);
	
	if(pos>length())
		printf("\n Invalid Location");
	
	else if(pos==1)
	{
		temp->link=root;
		root=temp;
	}
	
	else
	{
	
		struct node *p=root;
		int i=1;
		
		while(i<pos-1)
		{
			p=p->link;
			i++;
		}
		
		temp->link=p->link;
		p->link=temp;
		
	}
	
}
			
void delete()
{

	int pos;
	struct node *temp;
	
	printf("Enter position to be deleted");
	scanf("%d",&pos);
	
	if(pos>length())
		printf("Invalid Location\n");
	
	else if(pos==1)
	{
	
		temp=root;
		root=temp->link;
		temp->link=NULL;
		printf("Element to be deleted %d ",temp->data);
		free(temp);
		
	}
	
	else
	{
	
		struct node *p=root,*q;
		int i=1;
		
		while(i<pos-1)
		{
			p=p->link;
			i++;
		}
		
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		printf("Element to be deleted %d ",q->data);
		free(q);
	}
		
	
}
		
void traverse()
{

	struct node *p=root;
	
	if(root==NULL)
		printf("\n No elements to display");
	else
	{
		while(p->link!=NULL)
		{
			printf("%d->",p->data);
			p=p->link;
		}
		printf("%d",p->data);
	}
	
}

void main()
{

	int choice;
	
	while(1)
	{
		printf("\n\n1.Insert at Begin");
		printf("\n2.Insert at End");
		printf("\n3.Insert at spectific position");
		printf("\n4.Delete");
		printf("\n5.Length");
		printf("\n6.Traverse");
		printf("\n7.Exit");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:insertatbegin();
				break;
			case 2:insertatend();
				break;
			case 3:insertatpos();
				break;
			case 4:delete();
				break;
			case 5:printf("The length of the linked list is : %d ",length());
				break;
			case 6:traverse();
				break;
			case 7:exit(1);
				break;
			default : printf("\nEntered Wrong choice!!!");
			
		}
	}
	
}	
