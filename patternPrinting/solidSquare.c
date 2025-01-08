#include<stdio.h>
int main(){
    int r;
    printf("Enter no of rows ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}