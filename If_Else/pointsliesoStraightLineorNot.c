// #include<stdio.h>
// int main(){
//     float x1,y1,x2,y2,x3,y3;
//     printf("Enter the cordinates in the way x1,y1,x2,y2,x3,y3 : ");
//     scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
//     float m1=(y2-y1)/(x2-x1);
//     float m2=(y3-y2)/(x3-x2);
//     if (m1==m2){
//         printf("the given points fall on one straight line");
//     }else printf("they do not lies on same line");
    
//     return 0;
// }

#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("enter the value of x1,y1,x2,y2,x3,y3");
    scanf("%f %f %f %f %f %f: ", &x1 ,&y1, &x2, &y2, &x3, &y3);
    float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("collinear points");
    }
    else{
        printf("not collinear");
    }
    return 0;
    }