// #include<stdio.h>
// int main(){
//     int a=5;
//     int* x=&a; // int* --> int ka adress store krta hai
//     int** y=&x;//int** --> pointer ka address store krta hai 
//     //Important *x=7; // here value of a is changed
//     // printf("%d\n",a);
//     // printf("%d\n",&a);
//     // printf("%d\n",x);
//     printf("%d\n",&x);
//     printf("%d\n",y);
//     printf("%d\n",&y);
//     // printf("%d\n",&y);
//     printf("%d\n",*x);
//     printf("%d\n",*y);
//     return 0;
// }
#include<stdio.h>
int main(){
    // int* p;
    // float* a;
    // char* s;
    // printf("The size of integer pointer is : %d\n",sizeof(p));
    // printf("The size of char pointer is : %d\n",sizeof(s));
    // printf("The size of float pointer is : %d\n",sizeof(a));
    // int a =10;
    // int* ptr; // pointer declaration
    // ptr=&a; // pointer initialisatIon
    // // printf("%d",*ptr);
    // int a, *ptr;
    // a=10;
    // ptr=&a;
    // printf("%d\n",*ptr); // point the address of &a and take value of it // value of a;
    // printf("%d\n",*&a); // value of a
    // printf("%u\n",&a); // same as below
    // printf("%u\n",ptr); // output is same for above case also
    // printf("%u\n",&ptr); // address of ptr variable;
    int x,*p,**pp;
    x=10;
    p=&x;
    pp=&p;
    printf("%d\n",x); // value of x
    printf("%d\n",p);
    printf("%d\n",*p); // value of x
    printf("%d\n",*pp); // address of x
     printf("%d\n",**pp); // value of x
    return 0;
}