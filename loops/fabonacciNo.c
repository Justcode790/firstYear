// Fibonacci series
#include<stdio.h>
void fibbnoci(int n){
    int a=0 ,b=1,c;
    printf("%d\t %d\t",a,b);
    for(int i=1;i<n-1;i++){
        c=a+b;
        a=b;
        b=c;
     printf("%d\t",c);
    }
}
int main(){
    int n,sum;
    printf("enter the number: ");
    scanf("%d",&n);
    fibbnoci(n);
return 0;
}