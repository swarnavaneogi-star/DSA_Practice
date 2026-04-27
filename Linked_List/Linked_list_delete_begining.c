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
void Linked_list_delete_begin(struct node** head)
{
    if(*head==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    struct node* temp = *head;
    *head = (*head)->next;
    free(temp);
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    printf("Linked list before deletion:\n");
    traversal_linked_list(head);
    Linked_list_delete_begin(&head);
    printf("Linked list after deletion:\n");
    traversal_linked_list(head);
    return 0;
}