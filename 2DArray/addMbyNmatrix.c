#include<stdio.h>
int main(){
    int r,c;
    
    printf("Enter number of Rows and Column: ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter Elements of matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum +=a[i][j];
        }
    }
    printf("%d ",sum);
    return 0;
}