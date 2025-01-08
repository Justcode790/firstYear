#include<stdio.h>
int main(){
    int l,b,A,P;
    printf("Enter the length of rectangle: ");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&b);
    A=l*b;
    P=2*(l+b);
    if (A>P)
    {
        printf("Area is greater than its perimeter of the rectangle");
    }else{
        printf("Area is lesser than its perimeter of the rectangle");
    }
    
    return 0;
}