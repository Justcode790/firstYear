#include<stdio.h>
int main(){
    int a[3][3]={{0,1,2},{1,3,4},{2,5,6}};
    // printf("Enter elements of matrix: ");
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<2;j++){
    //         scanf("%d ",&a[i][j]);
    //     }
    // }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}