#include<stdio.h>
int main(){
    int n,x=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {   
        x=x*n;
        n=n-1;
    }
    printf("%d",x);
    return 0;
}

