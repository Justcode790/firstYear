// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of lines: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=i-1;
//         for(int k=1;k<=n-i;k++){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         for(int l=1;l<=i-1;l++){
//             printf("%d",a);
//             a--;
//         } 
//         printf("\n");
//     }
//     return 0;
// }


// albhabet of the above code 

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            char ch = (char)(j+64);
            printf("%c",ch);
        }
        for(int l=1;l<=i-1;l++){
            char ch =(char)(a+64);
            printf("%c",ch);
            a--;
            
        } 
        printf("\n");
    }
    return 0;
}