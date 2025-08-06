#include<stdio.h>
int main(){

    int arr[100],size,target,count=0,i,j;
printf("Enter size of array:");
scanf("%d",&size);
printf("\nEnter Element of Array: ");

for( i=0; i<size; i++){
    scanf("%d",&arr[i]);
}
 for(i=0; i<size-1; i++){
    for(j=0; j<size-1-i; j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j] =arr[j+1];
            arr[j+1]=temp;
        }
    }
 }
for(i=0; i<size; i++){
    printf("%d ",arr[i]);
}





return 0;
}