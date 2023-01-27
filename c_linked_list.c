/*
C linked list example implementation
Author: github.com/hadrianhu888
Date: 2019-12-01
Version: 1.0
Revision: 1 - 2019-12-01
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// implement node structure for linked list:
typedef struct node {
    int data;
    struct node *next;
} node;

// function to print linked list:
void insert_end(int);
void insert_begin(int);
void insert_after(int, int);
void delete_end(void);
void delete_begin(void);
void delete_after(int);
void display(void);
void clear(void);
void clrscr(void);

#define start NULL

void insert_end(int item) {
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory not available\n\n");
    }
}

void insert_begin(int item)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory not available\n\n");
    }
}

void insert_after(int index, int item)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory not available\n\n");
    }
}

void delete_end(void)
{
    struct node *temp, *ptr;
    if (start == NULL) {
        printf("List is empty\n\n");
    }
}

void delete_begin(void)
{
    struct node *temp;
    if (start == NULL) {
        printf("List is empty\n\n");
    }
}

void delete_after(int index)
{
    struct node *temp, *ptr;
    if (start == NULL) {
        printf("List is empty\n\n");
    }
}

void display(void)
{
    struct node *ptr;
    if (start == NULL) {
        printf("List is empty\n\n");
    }
}

void clear(void)
{
    struct node *ptr, *temp;
    if (start == NULL) {
        printf("List is empty\n\n");
    }
}

void clrscr(void)
{
    system("@cls||clear");
}

int main(void)
{
    int choice, item, loc;
    while (1) {
        printf("1. Insert at the end\n2. Insert at the beginning\n3. Insert after a location\n4. Delete from the end\n5. Delete from the beginning\n6. Delete after a location\n7. Display\n8. Exit\n\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter the item: ");
            scanf_s("%d", &item);
            insert_end(item);
            break;
        case 2:
            printf("Enter the item: ");
            scanf_s("%d", &item);
            insert_begin(item);
            break;
        case 3:
            printf("Enter the item: ");
            scanf_s("%d", &item);
            printf("Enter the location: ");
            scanf_s("%d", &loc);
            insert_after(item, loc);
            break;
        case 4:
            delete_end();
            break;
        case 5:
            delete_begin();
            break;
        case 6:
            printf("Enter the location: ");
            scanf_s("%d", &loc);
            delete_after(loc);
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Wrong choice\n\n");
        }
    }
}

// Path: c_linked_list.c 