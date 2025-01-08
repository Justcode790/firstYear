#include<stdio.h>
int main(){
    int a[5]={1,8,8,6,7},b[5]; 
    for(int i=0;i<5;i++){
        b[i]=a[4-i];  
    }
    for(int k=0;k<5;k++){
        printf("%d ",b[k]);
    }
    return 0;
}
