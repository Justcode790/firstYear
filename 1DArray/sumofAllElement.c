#include<stdio.h>
int main(){
    int x=0, NA[5]={1,2,3,5,4};
    for(int i=0;i<5;i++){
        
        x=x+NA[i];
    }
    printf("%d\n",x);

    return 0;
}