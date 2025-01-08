#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c && a>d) {
       printf("%d is the greatest among them",a);
    }
    if (b>a && b>c && b>d) {
       printf("%d is the greatest among them",b);
    }
    if (c>a && c>b && c>d) {
       printf("%d is the greatest among them",c);
    }
    if (d>a && d>b && d>c) {
       printf("%d is the greatest among them",c);
    }
    
    return 0;
}