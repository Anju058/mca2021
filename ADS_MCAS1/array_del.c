#include<stdio.h>

void main()
{
	int a[10],i,n,ele,pos;
	
	printf("\nEnter how many elements:");
	scanf("%d",&n);
	
	printf("\nEnter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Elements before deletion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	
	printf("Enter the element to delete");
	scanf("%d",&ele);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			pos=i;
			break;
		}
	}
	
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n-=1;
	
	printf("Elements after deletion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
	
