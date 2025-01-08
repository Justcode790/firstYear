#include<stdio.h>
int main(){
    int m,n;
    printf("Enter rows: ");
    scanf("%d",&m);
    printf("Enter columns: ");
    scanf("%d",&n);
    int r[m][n];
    printf("Enter elements of matrix: \n");
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&r[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",r[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}

// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter rows: ");
//     scanf("%d",&m);
//     printf("Enter columns: ");
//     scanf("%d",&n);
//     int r[m][n],b[n][m];
//     printf("Enter elements of matrix: \n");
//      for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&r[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             b[i][j]=r[j][i];
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int m;
//     printf("Enter rows=column: ");
//     scanf("%d",&m);
//     int r[m][m];
//     printf("Enter elements of matrix: \n");
//      for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&r[i][j]);
//         }
//     }printf("\n");
//     for(int i=0;i<m;i++){
//         for(int j=i;j<m;j++){
//             int temp=r[i][j];
//             r[i][j]=r[j][i];
//             r[j][i]=temp; 
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             printf("%d ",r[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }