#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
void traversal_linked_list(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* Linked_list_insert_middle(struct node* head,int data,int index)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;

    struct node* temp = head; 
    int i=0;
    if(index == 1)
    {
    ptr->next = head;
    return ptr;
    }
    while(i != index-1)
    {
        temp = temp->next;
        i++;
    }
    ptr->next = temp->next;  // FIRST connect new node to next
    temp->next = ptr; 
    return head;
};
int main ()
{
    struct node*head ;
    struct node*second ;
    struct node*third ;
    struct node*new ;
    
    // allocate 3 nodes in the heap
    head = (struct  node*)malloc(sizeof(struct node));
    second = (struct  node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    // allocate data in the first node
    head-> data =10;
    head-> next =second ;
    // allocate data in the second node 
    second -> data =20;
    second ->next =third;
    // allocate memory in the third node 
    third -> data=30;
    third -> next =NULL;// node part ends here 
    // calling funtion to traverse the linked list
    traversal_linked_list(head);
    int position;
    printf("Enter a postion to enter your value:\n");
    scanf("%d",&position);
    head =Linked_list_insert_middle(head,40,position);
    printf("After inserting new node at the end of the linked list\n");
    traversal_linked_list(head);
    return 0;
}