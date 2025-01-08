#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int c = 0;
    while (n!=0)
    {
        int x=n%10;
        c=c+x;
        n=n/10;
    }
    printf("%d",c);
    return 0;
}