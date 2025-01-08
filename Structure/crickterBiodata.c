#include<stdio.h>
int main(){
    struct data
    {
       int age;
       char name[20];
       int no;
       float avg;
    };
    printf("%d",sizeof(struct data));
    return 0;
}