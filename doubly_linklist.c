#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int val) {
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    struct node *ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->prev = ptr;
}

void deleteEnd() {
    if (head == NULL) {
        printf("List is empty...");
        return;
    }

    struct node *ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    if (ptr->prev != NULL) {
        ptr->prev->next = NULL;
    } else {
        // Only one element in the list
        head = NULL;
    }

    free(ptr);
}

void Firstinsert(int val) {
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    temp->prev = NULL;

    if (head != NULL) {
        head->prev = temp;
    }

    head = temp;
}

void Fisrtdelete() {
    if (head == NULL) {
        printf("List is empty...");
        return;
    }

    struct node *temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }

    free(temp);
}

void Midinsert(int val, int pos) {
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL) {
        printf("List is empty...");
        return;
    }

    struct node *ptr = head;
    int count = 1;

    while (count < pos - 1 && ptr != NULL) {
        ptr = ptr->next;
        count++;
    }

    if (ptr == NULL) {
        printf("Position not found in the list.");
        return;
    }

    temp->next = ptr->next;
    temp->prev = ptr;
    
    if (ptr->next != NULL) {
        ptr->next->prev = temp;
    }
    
    ptr->next = temp;
}

void Middelete(int pos) {
    if (head == NULL) {
        printf("List is empty...");
        return;
    }

    struct node *ptr = head;
    int count = 1;

    while (count < pos && ptr != NULL) {
        ptr = ptr->next;
        count++;
    }

    if (ptr == NULL) {
        printf("Position not found in the list.");
        return;
    }

    if (ptr->prev != NULL) {
        ptr->prev->next = ptr->next;
    } else {
        head = ptr->next;
    }

    if (ptr->next != NULL) {
        ptr->next->prev = ptr->prev;
    }

    free(ptr);
}

void display() {
    struct node *ptr = head;

    if (head == NULL) {
        printf("List is Empty...");
    } else {
        while (ptr != NULL) {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }

    printf("\n");
}

int main() {
    int ch;

    printf("\n1. InsertEnd ");
    printf("\n2. DeleteEnd ");
    printf("\n3. Display ");
    printf("\n4. Insert First ");
    printf("\n5. Delete First ");
    printf("\n6. Mid insert  ");
    printf("\n7. Mid Delete  "); 
    printf("\n0. End Program ");

    do {
        int x, pos;
        printf("\nEnter your choice :");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter Your Value :");
                scanf("%d", &x);
                insertEnd(x);
                break;
            case 2:
                deleteEnd();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Enter Your Value :");
                scanf("%d", &x);
                Firstinsert(x);
                break;
            case 5:
                Fisrtdelete();
                break;
            case 6:
                printf("Enter your Value :");
                scanf("%d", &x);
                printf("Enter Position :");
                scanf("%d", &pos);
                Midinsert(x, pos);
                break;
            case 7:
                printf("Enter Position to delete :");
                scanf("%d", &pos);
                Middelete(pos);
                break;
            case 0:
                printf("Program is closed.");
                break;
            default:
                printf("You Entered the Wrong Choice.");
                break;
        }
    } while (ch != 0);

    return 0;
}
