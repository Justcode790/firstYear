#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the length of sides");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("the given sides can form a triangle");
    }else printf(" they cannot be the sides of triangle");
    
    return 0;
}