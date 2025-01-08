#include<stdio.h>
int main(){
    int count =0, a[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        if(a[i]>-8){
            count++;
        }
        
    }
    printf("%d ",count);
    return 0;
}