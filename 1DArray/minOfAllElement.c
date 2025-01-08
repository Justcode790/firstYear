#include<stdio.h>
#include<limits.h>
int main(){
    int min=INT_MAX,an[5]={-59,56,4,3,74};
    for(int i=0;i<5;i++){
        if(min>an[i]){
            min=an[i];
        }
    }
    printf("%d",min);
    return 0;
}