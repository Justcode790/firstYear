// #include<stdio.h>
// int main(){
//     int a[5]={1,2,4,1,2};
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//         if(a[i]==a[j]){
//             printf("%d ",a[i]);
//         } 
//     }
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int a[5]={1,2,4,1,2};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        if(a[i]!=a[j]){
            printf("%d ",a[i]);
        } else printf("%d ",a[i]);
    }
    }
    return 0;
}