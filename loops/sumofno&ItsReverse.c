#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int y=n;
    int x=0;
    while (n!=0)
    {
    x=x*10;
    x=x+(n%10);
    n=n/10;
    }
    printf("%d",x+y);
    return 0;
}