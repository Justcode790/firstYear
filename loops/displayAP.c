// //  AP without formula
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number : ");
//     scanf("%d",&x);
//     int a=4;
//     for (int i=1; i<=x; i++){
//        printf("%d ",a);
//        a=a+3;
//     }
//     return 0;
// }

               // AP With formula

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(int i=4;i<=(3*n)+1;i=i+3){ // for condition statemant first calculate the last term of the AP then Print AP 
//         printf("%d ",i);
//     }
//     return 0;
// }

// print nth term of an AP


#include<stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    int a=4;
    int arr[x];
    for (int i=1; i<=x; i++){
        arr[i]=a;
       printf("%d ",a);
       a=a+3;
    }
    printf("\n");
    printf("%d",arr[x]);
    return 0;
}