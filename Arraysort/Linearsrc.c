#include<stdio.h>
int main(){

int arr[100],size,target,count=0;
printf("Enter size of array:");
scanf("%d",&size);
printf("\nEnter Element of Array: ");

for(int i=0; i<size; i++){
    scanf("%d",&arr[i]);
}
printf("\nEnter Targeted Value: ");
scanf("%d",&target);

for(int i=0; i<size; i++){
    if(arr[i]==target){
        printf("targeted value founded %d at %d",arr[i],i);
        return 0;
    }
}

    printf("not founded");
    return 0;
}