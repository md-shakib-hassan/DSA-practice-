#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
        struct node *link;
};
  struct node* add_begin(struct node *head, int data){
             struct node   *ptr=malloc(sizeof(struct node));
             ptr->data=data;
             ptr->link=NULL;
                ptr->link=head;
                head=ptr;
                return head;

  }
int main(){
            struct node *head,*second,*ptr;
            head = malloc(sizeof(struct node));
            second = malloc(sizeof(struct node));
            ptr = malloc(sizeof(struct node));
        
            head->data=10;
            second->data=20;

            head->link=second;
            second->link=NULL;
            int data;

            scanf("%d",&data);

           head= add_begin(head,data);
            ptr=head;
            
            while(ptr!=NULL){
                printf("%d ",ptr->data);
                ptr=ptr->link;
            }



    return 0;
}
