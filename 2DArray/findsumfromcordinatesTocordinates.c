#include<stdio.h>
void sumcoordinates(int m,int n,int r[m][n],int ir,int ic,int fr,int fc){
    int sum=0;
    for(int i=ir;i<fr;i++){
        for(int j=ic;j<fc;j++){
            sum +=r[i][j];
        }
    }
    printf("%d",sum);
}
int main(){
    int m,n,ir,ic,fr,fc;
    printf("Enter rows: ");
    scanf("%d",&m);
    printf("Enter columns: ");
    scanf("%d",&n);
    int r[m][n];
    printf("Enter elements of matrix: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&r[i][j]);
        }
    }
    printf("Enter cordinates in the way (ir,ic),(fr,fc): ");
    scanf("%d %d %d %d",&ir,&ic,&fr,&fc);
    sumcoordinates(m,n,r,ir,ic,fr,fc) ;
    return 0;
}