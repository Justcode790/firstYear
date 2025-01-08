#include<stdio.h>
int main(){
    int x; 
    printf("Enter the number: ");
    scanf("%d",&x);
    if (x%2==0){ // double equal to means comparison while 
        printf("the number is even");
    }else{
        printf("the number is odd");
    }
    
    return 0;
}