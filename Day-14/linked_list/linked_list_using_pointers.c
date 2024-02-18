#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node* head = NULL;
struct node
{
	int data;
	struct node* next;
};
int main()
{
	int choice;
	while(1)
	{
	    printf("\n*****\n");
	    printf("0. Create\n");
	    printf("1. display\n");
	    printf("2. Insert Node at beginning\n");
	    printf("3. Insert Node in specific position\n");
	    printf("4. Insert Node at end of LinkedList\n");
	    printf("5. Delete Node at beginning\n");
	    printf("6. Delete Node at end\n");
	    printf("7. Delete Node at position\n");
	    printf("8. ** To exit **");
	    
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0: create();
					break;
			case 1: display();
					break;
			case 2: insert_begin();
					break;
			case 3: insert_pos();
					break;
			case 4: insert_end();
					break;
			case 5: delete_begin();
					break;
			case 6: delete_end();
					break;
			case 7: delete_pos();
					break;
			case 8: exit(0);
			default:printf("\n Wrong Choice");
                    break;
		}
	}
}
//creates a node
void create()
{
	struct node* temp;
        //creating new node
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&temp->data); 
	temp->next = NULL;
	if(head==NULL)	{
		head = temp;
	}
	else{
		struct node* ptr = head;
		while(ptr->next!=NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp; //inserting at end of List
	}
}
// prints the entire LinkedList
void display()
{
	if(head==NULL)
	{
		printf("Linked List is Empty\n");
		return;
	}
        printf("LinkedList: ");
	struct node* ptr = head;
	while(ptr!=NULL) // start from first node
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
    printf("\n");
}
// to insert node at start of LinkedList
void insert_begin()
{
	struct node* temp;
        // creating a new node
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&temp->data);
	temp->next = NULL;
	if(head==NULL)
	{
		head = temp;
		return;
	}
	else
	{
		temp->next = head; //point it to old head node
		head = temp; //point head to new first node
	}
}
// to insert node at given position
void insert_pos()
{
	struct node* temp;
        // creating a new node
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&temp->data);
	temp->next = NULL;
	if(head==NULL) // if list empty we return
	{
		head = temp;
	        return;
	}
	else
	{
		struct node* prev_ptr;
		struct node* ptr = head;
		int pos;
		printf("Enter position: ");
		scanf("%d",&pos);
		for(int i=0;i<pos;i++)
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
                //new node pointing to node in that pos
		temp->next = ptr;
                //prevptr pointing to new node
		prev_ptr->next = temp;
	}
}
// to insert node at end of LinkedList
void insert_end()
{
	struct node* temp;
        //creating new node
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&temp->data); 
	temp->next = NULL;
	if(head==NULL)
	{
		head = temp; //if list is empty, we return
	        return;
	}
	else{
		struct node* ptr = head;  
		while(ptr->next!=NULL)
		{
			ptr = ptr->next;
		}
               // tail node pointing to new node
		ptr->next = temp;
	}
}
// to delete first node of LinkedList
void delete_begin()
{ 
	if(head==NULL) //if List is empty we return
	{
		printf("Linked List is empty | Nothing to delete \n");
		return;
	}
	else
	{
		struct node* ptr = head; 
		head = head->next; // head node pointing to second node
		free(ptr); // deleting prev head node
		printf("Node Deleted \n");
	}
}
// to delete last node of LinkedList
void delete_end()
{
	if(head==NULL) //if List is empty we return
	{
		printf("Linked List is empty | Nothing to delete \n");
		return;
	}
	else if(head->next==NULL) 
	{
		struct node* ptr = head;
		head = ptr->next;
		free(ptr);
	}
	else
	{
		struct node* ptr = head;
		struct node* prev_ptr = NULL;
		while(ptr->next!=NULL)// traverse till last but one node
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
		prev_ptr->next = NULL; // next field of last but one field is made as NULL
		free(ptr); // deleting last node
	}	
}
// to delete node at given position
void delete_pos()
{
	int pos;
	printf("Enter node position to delete: ");
	scanf("%d",&pos);     
	struct node* ptr=head;                                                                               
	if(head==NULL) //we return if List is empty
	{
		printf("Linked List is empty \n"); 
		return;
	}
	else if(pos == 0) 
	{
		ptr = head;
		head=ptr->next; // head pointing to second node
		free(ptr); // deleting old first node
	}
	else
	{
		struct node* prev_ptr;
		for(int i=0;i<pos;i++)
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
		prev_ptr->next = ptr->next; //prev node pointing to pos+1 node
		free(ptr); //deleting node at pos
	}
}

/*

*****
0. Create
1. display
2. Insert Node at beginning
3. Insert Node in specific position
4. Insert Node at end of LinkedList
5. Delete Node at beginning
6. Delete Node at end
7. Delete Node at position
8. ** To exit **
Enter your choice: 0
Enter node data: 12
0. Create
1. display
2. Insert Node at beginning
3. Insert Node in specific position
4. Insert Node at end of LinkedList
5. Delete Node at beginning
6. Delete Node at end
7. Delete Node at position
8. ** To exit **
 Enter your choice: 1
LinkedList: 12
*****

0. Create
1. display
2. Insert Node at beginning
3. Insert Node in specific position
4. Insert Node at end of LinkedList
5. Delete Node at beginning
6. Delete Node at end
7. Delete Node at position
8. ** To exit **
 Enter your choice: 2
Enter node data: 13
*****

0. Create
1. display
2. Insert Node at beginning
3. Insert Node in specific position
4. Insert Node at end of LinkedList
5. Delete Node at beginning
6. Delete Node at end
7. Delete Node at position
8. ** To exit **
 Enter your choice: 3
Enter node data: 25
Enter position: 1

*****
0. Create
1. display
2. Insert Node at beginning
3. Insert Node in specific position
4. Insert Node at end of LinkedList
5. Delete Node at beginning
6. Delete Node at end
7. Delete Node at position
8. ** To exit **
 Enter your choice: 4
Enter node data: 39
*****

0. Create
1. display
2. Insert Node at beginning
3. Insert Node in specific position
4. Insert Node at end of LinkedList
5. Delete Node at beginning
6. Delete Node at end
7. Delete Node at position
8. ** To exit **
 Enter your choice: 5
Node Deleted
*****

0. Create
1. display
2. Insert Node at beginning
3. Insert Node in specific position
4. Insert Node at end of LinkedList
5. Delete Node at beginning
6. Delete Node at end
7. Delete Node at position
8. ** To exit **
 Enter your choice: 6
Last Node Deleted
*****

0. Create
1. display
2. Insert Node at beginning
3. Insert Node in specific position
4. Insert Node at end of LinkedList
5. Delete Node at beginning
6. Delete Node at end
7. Delete Node at position
8. ** To exit **
 Enter your choice: 7
Enter node position to delete: 2
Node at pos: 2 deleted
*****

*/

/*
Linked List Applications
Web browsers use linked lists to store the history of visited websites.
Operating systems use linked lists to store the process queue, memory management, and file system.
Compilers use linked lists to store symbol tables, parse trees, and code generation.
Databases use linked lists to store data in tables and indexes.
Graphics and animation software use linked lists to store objects and their relationships.
*/

//https://www.scaler.com/topics/c/linked-list-in-c/
