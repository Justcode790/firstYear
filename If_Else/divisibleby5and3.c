#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if (n%5==0 && n%3==0)
    {
       printf("the number is divisible by 5 as well as 3");

    }if(n%5==0){
        printf("The number is only divisible by 5 ");
    }if(n%3==0){
        printf("The number is only divisible by 3 ");
    }else{
        printf("The number is neither divisible by 5 nor 3 ");
    }
    
    return 0;
}