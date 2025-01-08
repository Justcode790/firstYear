#include<stdio.h>
int main(){
    int x=0,y=0, a[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        if(i%2==0){
           x=x+a[i];
        }
        else{
            y=y+a[i];
        }
        
    }printf("%d ",x-y);
    return 0;
}