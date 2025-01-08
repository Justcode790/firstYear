#include<stdio.h>
int main(){
    int x = 65; 
    printf("Enter the number: ");
    scanf("%d",&x);
    // ternary operators
    // condition1 ? expression1 : expression 2;
    x%2==0 ? printf("Even Number") : printf("Odd number");
         return 0;
}
//     char j = 'A';
//     if(x==j)
//     {
//         printf("yes");
//     }else printf("No");
    
//     return 0;
// }