#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traversal_linked_list(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void linked_list_reverse(struct node **head)
{
    struct node *prev=NULL;
    struct node *curr=*head;
    struct node *next =NULL;
    while (curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head =prev;
}
int main ()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head =(struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));
    fourth =(struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = NULL;
    printf("Linked list before reversal:\n");
    traversal_linked_list(head);
    linked_list_reverse(&head);
    printf("Linked list after reversal:\n");
    traversal_linked_list(head);
    return 0;
}