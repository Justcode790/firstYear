// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of lines: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int k=1;k<=n-i;k++){
//             printf(" ");
//         }
//         for(int j=1;j<2*i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Number Pyramid 

#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<2*i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}