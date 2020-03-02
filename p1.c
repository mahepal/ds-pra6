#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL,*curr,*temp,*newnode;

void create()
{
	//struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\n no enough memory avilable");
	}
	newnode->next=NULL;
	
	printf("enter no here:");
	scanf("%d",&newnode->data );

}
void InsertAtFirst()
{
	create();
	if(head==NULL)
	{
		head=newnode;
		//return;
	}
	else
	{
	newnode->next=head;
	head=newnode;
	}
}
void InsertAtLast()
{
	create();
	if(head==NULL)
	{
		head=newnode;
		return ;
	}
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}

void deleteAtFirst()
{
	if(newnode==NULL)
	{
		printf("empty node");
	}
	else
	{
		/*temp=newnode;
		newnode=newnode->next;*/
		free(temp);
	}
	printf("delete elements:%d",newnode->data);
}

void display()
{
	temp=head;
	if(head==NULL)
	{
		printf("there is no data");
	}
	while(temp!=NULL)
	{
		printf("\n\t%d",temp->data);
		temp=temp->next;
	}
}

int main()
{
	int ch;
		
	printf("-------------oprations------------\n");
	while(1)
		{
		fflush(stdin);
		printf("\n-------------oprations------------\n");
			printf("1.create");
			printf("\n2.insert at first");
			printf("\n3.insert at last");
			printf("\n4.delete");
			printf("\n5.display");
			printf("\n6.exit");
			printf("\nenter your choice:");
			scanf("%d",&ch);
			fflush(stdin);
			switch(ch)
			{
					case 1:
						create();
						break;
					case 2:
						InsertAtFirst();			
						break;
					case 3:
						InsertAtLast();	
						break;
					case 4:
						deleteAtFirst();
						break;
					case 5:
						display();
						break;
					case 6:
						exit(1);
						break;
			}
		
		}
}


