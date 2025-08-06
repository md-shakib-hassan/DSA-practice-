#include<stdio.h>

int main(){
      int arr[100],size,target;
printf("Enter size of array:");
scanf("%d",&size);
printf("\nEnter Element of Array: ");

for(int i=0; i<size; i++){
    scanf("%d",&arr[i]);
}
printf("\nEnter Targeted Value: ");
scanf("%d",&target);

 int left=0, right=size-1;
 while(left<=right){
   int mid=(right+left)/2;
   if(arr[mid]==target){
    printf("founded at %d index",mid);
    return 0;
   } else if(arr[mid]<target){
     left = mid+1;
   } else{
      right = mid -1;
   }
 }
  printf("that element not exist");
    return 0;
}