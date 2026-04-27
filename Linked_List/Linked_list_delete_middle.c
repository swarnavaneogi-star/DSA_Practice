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
void Linked_list_delete_middle(struct node** head, int position)
{
    if(*head==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    if(position==0)
    {
        struct node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    struct node* temp = *head;
    for(int i=0; temp!=NULL && i<position-1; i++)
    {
        temp = temp->next;
    }
    if(temp==NULL || temp->next==NULL)
    {
        printf("Position is out of bounds\n");
        return;
    }
    struct node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = NULL;
    printf("Linked list before deletion:\n");
    traversal_linked_list(head);
    Linked_list_delete_middle(&head, 1);
    printf("Linked list after deletion:\n");
    traversal_linked_list(head);
    return 0;
}