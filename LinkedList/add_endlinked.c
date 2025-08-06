#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* add_end(struct node *head, int data){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;

    if(head == NULL){ 
        head = newNode;
        return head;
    }

    struct node *ptr = head;
    while(ptr->link != NULL){ 
        ptr = ptr->link;
    }
    ptr->link = newNode; 

    return head;
}

int main(){
    struct node *head, *second, *ptr;
    
    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    
    head->data = 10;
    second->data = 20;
    head->link = second;
    second->link = NULL;

    int data;
    printf("Enter a number: ");
    scanf("%d", &data);

    head = add_end(head, data);

    ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
