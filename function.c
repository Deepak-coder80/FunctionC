#include <stdio.h>

int sum();
int diff();

void main(){
    int input1,input2,result1,result2;

    printf("Enter two numbers");
    scanf("%d\n%d",&input1,&input2);

    result1 = sum(input1,input2);
    result2 = diff(input1,input2);

    printf("Addition result is %d\n",result1);
    printf("difference  is %d\n",result2);
}


int sum(int a , int b){
    int sum;

    sum = a +b;

    return sum;
}


int diff(int a , int b){
    int diff;

    diff = a -b ;

    return diff;
}