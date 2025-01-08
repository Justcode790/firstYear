// #include<stdio.h>
// int main(){
//     int n;
//     printf("ENTER A NUMBER: ");
//     scanf("%d",&n);
//     int a=0;
//     for(int i=2;i<n-1;i++){
//         if(n%i==0){
//             a=1;
//             break; // since i am terminating the for loop 
//                    // then why break statement is used 
//                     // inside if statement ? 
//         }
//     }if(a==0) printf("the number is prime");
//     else printf("The number is coomposite");
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i, j, a;
//     for (j = 1; j <= 100; j++) {
//         a = 0;
//         for (i = 2; i <= j / 2; i++) {
//             if (j % i == 0) {
//                 a++;
//                 break;
//             }
//         }
//         if (a == 0 && j != 1) {
//             printf("%d ", j);
//         }
//     }
//     return 0;
// }

// OR
#include <stdio.h>
void Primeornot(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0){
            printf("%d ",n);
        }
}
int main() {
    for(int i=2;i<=100;i++){
        Primeornot(i);   
    }
    return 0;
}

// #include <stdio.h>
// #include <math.h>
// void fabnocci(int a,int b,int c){
//     int r1,r2;
//     int D=((b^2)-4*a*c);
//     if(D==0){
//         r1=r2=(-b)/(2*a);
//     }
//     if(D>0){
//         r1=((-b)+sqrt(D))/(2*a);
//         r2=((-b)-sqrt(D))/(2*a);
//     }
//     printf("%d %d",r1,r2);
// }
// int main() {
//     int a,b,c;
//     printf("enter the coeffiecent of Quadratic equation ");
//     scanf("%d %d %d",&a,&b,&c);
//     fabnocci(a,b,c);
//     return 0;
// }