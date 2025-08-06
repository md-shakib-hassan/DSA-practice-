#include<stdio.h>
#include<stdlib.h>
 struct Node{
       int data;
       struct Node *next;
 };

int main (){

     struct Node *head,*current,*current2,*ptr;
     head = malloc(sizeof(struct Node));
     current = malloc(sizeof(struct Node));
     current2 = malloc(sizeof(struct Node));
      ptr = malloc(sizeof(struct Node));
      head->data = 10;
      current->data=20;
      current2->data=30;
      head->next=current;
      current->next=current2;
      current2->next = NULL;
      ptr=head;
      while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
      }

 return 0;
}
