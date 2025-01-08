#include<stdio.h>
int main(){
    int a[5][5]; //={{0,1,2},{1,3,4},{2,5,6}};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            a[i][j]=10;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}