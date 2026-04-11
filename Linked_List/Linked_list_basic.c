#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
void Linked_list_traversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main ()
{
    struct node*head ;
    struct node*second ;
    struct node*third ;
    // allocate 3 nodes in the heap
    head = (struct  node*)malloc(sizeof(struct node));
    second = (struct  node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    // allocate data in the first node
    head-> data =100;
    head-> next =second ;
    // allocate data in the second node 
    second -> data =200;
    second ->next =third;
    // allocate memory in the third node 
    third -> data=300;
    third -> next =NULL;// node part ends here 

    // calling funtion to traverse the linked list
    Linked_list_traversal(head);
   return 0;
}