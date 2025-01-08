#include<stdio.h>
int main(){
    int x,r;
    printf("Enter a number of terms  : ");
    scanf("%d",&x);
    printf("Enter the common ratio: ");
    scanf("%d",&r);
    int a=1;
    for(int i=1;i<=x;i++){
        a=a*r;
        printf("%d ",a);
    }
    return 0;
}