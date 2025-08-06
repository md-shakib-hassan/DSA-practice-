#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *start;

struct node* creat_list(struct node *start){
    struct node *new_code;
    int data;
    printf("Enter node data :");
    scanf("%d",&data);

    while(data!=-1){
        new_code = malloc(sizeof(struct node));
        new_code->data=data;
        new_code->link=NULL;

        if(start==NULL){
            start=new_code;
        }else{
            struct node *ptr ;
            ptr = start;
            
            while(ptr->link != NULL){
                ptr = ptr->link;
            }
            ptr->link = new_code;
        }

        printf("Enter node data :");
        scanf("%d",&data);   
    
    }
    return start;
}

void displayit(struct node *start){
    struct node *ptr;
    ptr = start;

    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr= ptr->link;
    }
   printf("\n");
}
 void deletion1stnode(struct node *start){
    struct node *temp,*ptr;
    temp = malloc(sizeof(struct node));
    temp=start;
    start=start->link;
    free(temp);
    ptr =start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
 }


int main(){
    start=creat_list(start);
    displayit(start);
    int data,data2;
   // printf("\nEnter data for after insertion ");
   // scanf("%d",&data);
   // printf("\nEnter data what to want to insert ");
   // scanf("%d",&data2);
    deletion1stnode(start);

   
    return 0;
}





