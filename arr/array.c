#include <stdio.h>

int main()
{
   int num,i=10,result;
   printf("Enter a number");
   scanf("%d",&num);
   
   while(i>=1){
       result = i *num;
       
       printf("%d x %d = %d\n",i,num,result);
       i--;
   }

    return 0;
}