#include<stdio.h>
void change(int *p){
    *p = 12;
}
int main(){
    int a=10;
    printf("%d\n",a);
    change(&a);
    printf("%d",a);
    return 0;
}