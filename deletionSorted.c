#include <stdio.h>

void main(){
    int array[50];
    int pos,i,size;

     //Get size
    printf("Enter size of array:");
    scanf("%d",&size);

    //Get elements
    printf("Enter elements of array:");
    for ( i = 0; i < size ; i++)
    {
       scanf("%d",&array[i]);
    }
    
    printf("Enter the position you want to deleted the data");
    scanf("%d",&pos);

   for ( i = pos-1; i < size-1; i++)
   {
       array[i] = array[i+1];
   }
   

    size--;

    for ( i = 0; i < size; i++)
    {
        printf(" %d \t" , array[i]);
    }

    printf("\n");
    
    
}