#include<stdio.h>
int main(){
    int n;
    int sumE=0;
    int sumO=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         if (i%2==0)
         {
           sumE=sumE+i;
         }else {
            sumO=sumO+i;
         }     
    }
    printf("The sum of the series is : %d",sumO-sumE);
    return 0;
}