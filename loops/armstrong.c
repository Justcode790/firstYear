#include <stdio.h>
int main() {
    int a,b,x,y=0;
    printf("enter the number: ");
    scanf("%d",&a);
    b=a;
    while(b!=0){
        x=b%10;
        y=y+x*x*x;
        b=b/10;
    }
    if (b==a){
        printf("armstrong");
    }else  printf(" not armstrong");

    return 0;
}


// // armstrong number b/w 1 to 500
// #include <stdio.h>
// int main() {
//     int n; //x=0;
//     for(int i=1;i<=500;i++){
//         int b=i;
//         int x=0; 
//             while(b>0){
//                 n=b%10;
//                 x=x+n*n*n;
//                 b=b/10;
//             }
//         if (x==i){
//             printf("%d ",i);
//         }
//     }
// return 0;
// }