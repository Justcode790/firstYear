// accessing pointer using dot operator

#include<stdio.h>
struct rectangle{
    int l,b;
}r={10,20};
int main(){
    struct rectangle *ptr;
    ptr=&r;
    (*ptr).l=34;
    (*ptr).b=65;
    printf("%d ",r.l);
    printf("%d",r.b);
    return 0;

}

//  accessing pointer using arrow operator

#include<stdio.h>
struct rectangle{
    int l,b;
}r={10,20};
int main(){
    struct rectangle *ptr;
    ptr=&r;
    ptr->l=34;
    ptr->b=65;
    printf("%d ",ptr->l);
    printf("%d",ptr->b);
    // printf("%d",r->l);
    // printf("%d",r->b);
    return 0;

}