#include<stdio.h>
int main(){
    int count=0, a[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
           for(int k=j+1;k<6;k++){
                if(a[i]+a[j]+a[k]==9){
            count++;
                }
            }
        }
    }
    printf("%d ",count);
return 0;
}