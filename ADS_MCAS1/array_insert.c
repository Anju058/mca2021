#include<stdio.h>
#include<stdlib.h>

int a[50],n;

void insertatbegin()
{

	int item,i;
	
	printf("Enter item at begin\n");
	scanf("%d",&item);
	
	for(i=n-1;i>=0;i--)
		a[i+1]=a[i];
		
	a[0]=item;
	n=n+1;
	
	printf("Item inserted\n");

}

void insertatend()
{
	
	int item;
	
	printf("Enter item at end\n");
	scanf("%d",&item);
	
	a[n]=a[n-1];
	a[n-1]=item;
	n=n+1;
	
	printf("Item inserted\n");
	
}

void insertspecific()
{

	int i,item,pos;
	
	printf("Enter position\n");
	scanf("%d",&pos);
	printf("Enter item\n");
	scanf("%d",&item);
	
	for(i=n-1;i>=pos-1;i--)
		a[i+1]=a[i];
	a[pos-1]=item;
	n=n+1;
	
	printf("Item inserted\n");
	
}

void search(int ele)
{

	int flag=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
		 	printf("Element %d found at %d",ele,i+1);
		 	flag=1;
			break;
		}
	}
	
	if(flag==0)
		printf("Item not found!!!");
		
}

void traversal()
{
	printf("\nThe elements are :");
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
}
	
void main()
{

	int choice,ele;
	
	printf("Enter number of elements\n");
	scanf("%d",&n);
	
	printf("Enter %d elements",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	while(1)
	{
	
		printf("\n1.Insert at begin\n");
		printf("2.Insert at end\n");
		printf("3.Insert at position\n");
		printf("4.Search for an element\n");
		printf("5.Traversal\n");
		printf("6.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:insertatbegin();
			       break;
			case 2:insertatend();
			       break;
			case 3:insertspecific();
			       break;
			case 4:printf("Enter element to be searched:");
			       scanf("%d",&ele);
			       search(ele);
			       break;
			case 5:traversal();
			       break;
			case 6:exit(0);
			       break;
			default:printf("Wrong choice!!!");
		}
	}
}
