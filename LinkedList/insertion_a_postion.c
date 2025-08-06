#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head,*current,*current2,*current3,*ptr,*temp;

    head = malloc(sizeof(struct node));
    current = malloc(sizeof(struct node));
    current2 = malloc(sizeof(struct node));
    current3 = malloc(sizeof(struct node));
    temp = malloc(sizeof(struct node));
     
    head->data = 10;
    current->data = 20;
    current2->data = 30;
    current3->data = 40;
    temp->data = 25;

    
    head->link = current;
    current->link = current2;
    current2->link = current3;   
    current3->link = NULL;
    temp->link = NULL;

    
    printf("Initial List: ");
    ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    int k;

   printf("Enter th position: ");
   scanf("%d",&k);

    ptr = head;
    for(int i=1; i<k-1 && ptr!=NULL; i++){
        ptr = ptr->link;
    }

    temp->link = ptr->link;   
    ptr->link = temp;         

   
    printf("Updated List: ");
    ptr = head;  
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    return 0;
}
