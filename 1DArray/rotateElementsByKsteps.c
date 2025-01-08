#include<stdio.h>
void rotate(int a[],int p,int q){
    for(int i=p,j=q;i<j;i++,j--){
         int temp=a[i];
         a[i]=a[j];
         a[j]=temp; 
    }
    return;
}
int main(){
    int a[5]={1,2,3,4,5};
    int n=5;
    int k=8;
    k=k%n;
    rotate(a,0,n-1);
    rotate(a,0,k-1);
    rotate(a,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}