#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char a='A';
        for(int j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",a);
                a=a+1;
            }
            else{
                printf("%d ",j);
            }
            
        }
        printf("\n");
    }
    return 0;
}