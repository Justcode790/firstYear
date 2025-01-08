#include<stdio.h>
int main(){
    int x;
    printf("enter the any number whether it is negative or positive no issue : ");
    scanf("%d",&x);
    if (x<0){
        int y= (-1) * (x);
        printf("the absolute value is %d",y);
    }else{
        printf("the absolute value is %d",x);
    }
    return 0;
}