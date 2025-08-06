#include<stdio.h>
int main(){

 int arr1[100],arr2[100],arr3[100],size1,size2,size3,i;
  printf("\nEnter first array size: ");
  scanf("%d",&size1);
  printf("\nEnter 2nd array size: ");
  scanf("%d",&size2);

  printf("\nenter 1st element array :");

  for(i=0; i<size1; i++){
    scanf("%d",&arr1[i]);
  }

  printf("\nenter 2nd element array :");

  for(i=0; i<size2; i++){
    scanf("%d",&arr2[i]);
  }
   printf("\nmerge of two array:");
    for(i=0; i<size1; i++){
        arr3[i]=arr1[i];
    } 
    for(i=0; i<size2; i++){
        arr3[size1+i]=arr2[i];
    }

    for(i=0; i<size1+size2; i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}