#include<stdio.h>
#include<limits.h>
int main(){
    int r[2][2]={1,2,8,4};
    int x=INT_MIN;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(r[i][j]>x){
                x=r[i][j];
            }
        }
    }
    printf("%d",x);
    return 0;
}

//                  OR

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int r[2][2]={1,2,8,4};
//     int x=INT_MAX;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             if(r[i][j]<x){
//                 x=r[i][j];
//             }
//         }
//     }
//     printf("%d",x);
//     return 0;
// }