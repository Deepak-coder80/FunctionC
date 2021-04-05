#include <stdio.h>

int main(){
    int array[50],i,size,j,temp;

    //Get size
    printf("Enter size of array:");
    scanf("%d",&size);

    //Get elements
    printf("Enter elements of array:");
    for ( i = 0; i < size ; i++)
    {
       scanf("%d",&array[i]);
    }

     //print array
    printf("elements in array before sorting:");
    for ( i = 0; i < size ; i++)
    {
       printf("{%d}",array[i]);
    }
     printf("\n");

    //sorting
    for ( i = 0; i < size-1; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if (array[i]< array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            
        }
        
    }
    
    
    printf("elements in array after sorting:");
    for ( i = 0; i < size ; i++)
    {
       printf("{%d}",array[i]);
    }
     printf("\n");
    
    return 0;
}