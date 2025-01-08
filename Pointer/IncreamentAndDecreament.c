#include<stdio.h>
int main(){
    int n=10;
    int* p;
    p=&n;
    printf("Address of n: %d\n",p);
    // p=p+3;
    p=p-2;
    printf("value of p after increament: %d\n",p);
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n=10;
//     int* p;
//     p=&n;
//     int* q=&n;
//     if (p==q)
//     printf("Enter pointer are equal");
//     else printf("Enter pointer are unequal");
//     return 0;
// }