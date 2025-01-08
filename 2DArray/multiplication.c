#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of Rows and Column in 1st: ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter Elements of 1st matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }int p,q;
    printf("Enter number of Rows and Column in 2nd matrix: ");
    scanf("%d%d",&p,&q);
    int b[p][q];
    printf("Enter Elements of 2nd matrix: \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(c!=p) printf("Multiplication cannot be determined");
    else{
        int res[r][q];
        for(int i=0;i<r;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<c;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}