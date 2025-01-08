#include<stdio.h>
int main(){
    int a[5],x=1;
    printf("Enter element: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<5;j++){
        x=x*a[j];
    }
    printf("%d",x);
    return 0;
}