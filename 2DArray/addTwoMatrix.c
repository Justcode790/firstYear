// #include<stdio.h>
// int main(){
//     int a[3][3]={{0,1,2},{1,3,4},{2,5,6}};
//     int b[3][3]={{2,5,6},{0,1,2},{1,3,4}};
//     int r[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             r[j][i]=a[i][j]+b[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",r[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

                        //OR

#include<stdio.h>
int main(){
    int a[3][3]={{0,1,2},{1,3,4},{2,5,6}};
    int b[3][3]={{2,5,6},{0,1,2},{1,3,4}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
                            