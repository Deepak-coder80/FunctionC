#include <stdio.h>

void main(){
    int array[50],i,size,num,pos,choice;

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
    printf("elements in array:");
    for ( i = 0; i < size ; i++)
    {
       printf("{%d}",array[i]);
    }
     printf("\n");
    //get new element
    printf("Do you wanted to enter any elements more? \n Enter 1 for yes \t Enter 2 for no :");
    scanf("%d",&choice);
    if (choice==1)
    {
        //Get newnumber
        printf("Enter the new number:");
        scanf("%d",&num);

        //get newnumber's position
        printf("Enter the new number's position:");
        scanf("%d",&pos); 

        for ( i = size-1; i >= pos-1 ; i--){
            array[i+1] = array[i];
        }

        array[pos-1] = num;

        size++;

        printf("elements in array with new number:");
        for ( i = 0; i < size ; i++)
        {
            printf("{%d}",array[i]);
        }

        printf("\n");
        

    }else {
        //print array
        printf("elements in array:");
        for ( i = 0; i < size ; i++)
        {
        printf("{%d}",array[i]);
        }

        printf("\n");
    }
       


}
