#include<stdio.h>
int main(){
    int n;
    printf("Enter your marks: ");
    scanf("%d",&n);
if (n<0){
    printf("enter the marks in positive");
} else if(n>80){
        printf("grade A");
    }
    else if(n>70){
        printf("grade B");
    }
    else if(n>60){
        printf("grade C");
    }
    else if(n>40){
        printf("grade D");
    }
    if(n<40 && n>0){
        printf("FAIL");
    }
    return 0;
}