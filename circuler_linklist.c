#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    if(head == NULL)
    {
        head = temp;
        temp->next = temp;
        return;
    }
    while(ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    return;
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *p;
    if(head == NULL)
    {
        printf("List is empty..");
        return;
    }
    if(ptr->next == head)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = head;
    free(ptr);
    return;
}
void display()
{
    struct node *ptr = head;
    if(head  == NULL)
    {
        printf("list is empty...");
        return;
    }
    else{
        do{

            printf("%d ",ptr->data);
            ptr = ptr->next;

        }while(ptr != head);
    }
    printf("\n");
}
int main()
{
    // insertEnd(10);
    // insertEnd(20);
    // insertEnd(30);
    // display();
    int val,pos,ch;
    printf("\n1. Display ");
    printf("\n2. Insert End ");
    printf("\n3. Delete End ");
    printf("\n0. End Program ");
    do{
        printf("\nEnter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    display();
                    break;
            case 2:
                    printf("Enter your value :");
                    scanf("%d",&val);
                    insertEnd(val);
                    break;
            case 3:
                    deleteEnd();
                    break;
            case 0:
                    printf("Program is closed.");
                    break;
            default:
                    printf("You Enter Wrong Choice .");
                    break;
        }
    }while(ch != 0);
}
