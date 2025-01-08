#include<stdio.h>
int main(){
    int r[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            r[i][j]=r[j][i];
        }
    }
    for(int i=0;i<3;i++){
        int j=0;
        int k=2;
        while(j<k){
            int temp=r[i][j];
                r[i][j]=r[i][k];
                r[i][k]=temp;
                j++;
                k--; 
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
