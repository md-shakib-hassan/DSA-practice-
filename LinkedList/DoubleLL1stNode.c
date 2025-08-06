#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
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
             new_code->prev = ptr;
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
    void deletionfirst(struct node *start){
        struct node *temp,*ptr;
        //temp=malloc(sizeof(struct node));
       temp=start;
       start=start->link;
       free(temp);

       ptr = start;

       while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr= ptr->link;
    }

    }




int main(){
    start=creat_list(start);
    displayit(start);
    deletionfirst(start);

    // int data,data2;
    // printf("Enter a data for you to add before :");
    // scanf("%d",&data);
    // printf("Enter a number to add before your targeted node:");
    // scanf("%d",&data2);
    // beforenode(start,data,data2);

    return 0;
}
