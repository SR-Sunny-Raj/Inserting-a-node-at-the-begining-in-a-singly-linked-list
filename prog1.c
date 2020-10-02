#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};
	struct node* add_beg(struct node *head,int d)
	{
		struct node *ptr = malloc(sizeof(struct node));
		ptr -> data = d;
		ptr -> link = NULL;
		ptr -> link = head;
		head = ptr;
		return head;
	};
int main()
{
	char choice;
	int data;
	struct node *ptr;
	struct node *head = malloc(sizeof(struct node));
	head -> data = 10;
	head -> link = NULL;
	struct node *ptr1 = malloc(sizeof(struct node));
	ptr1 -> data = 20;
	ptr1 -> link = NULL;
	head -> link = ptr;
	struct node *ptr2 = malloc(sizeof(struct node));
	ptr2 -> data = 30;
	ptr2 -> link = NULL;
	ptr1 -> link = ptr2;
	printf ("Our Linked List is : ");
	ptr = head;
		while (ptr != NULL)
		{
			printf ("%d->",ptr->data);
			ptr = ptr -> link;
		}
		printf ("Null\n");
		ptr = NULL;
	printf ("Do you want to insert a node at the beginning (y/n)\n");
	choice = getch();
	while (1)
	{
		if  (choice == 'y' || choice == 'Y')
		{
			printf ("Enter the data : ");
			scanf  ("%d",&data);
			head = add_beg(head,data);
			ptr = head;
			printf ("Our Updated Linked List is : ");
			while (ptr != NULL)
		{
			printf ("%d->",ptr -> data);
			ptr = ptr -> link;
		}
		printf ("NULL");
	}
		else
		{
			printf("Their is no updation in our linked list");
		}
	exit(0);
}
return 0;
}
