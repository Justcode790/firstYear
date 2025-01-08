// #include<stdio.h>
// int main(){
//     int x; 
//     printf("Enter the number: ");
//     scanf("%d",&x);
//     if (x%5==0){ // double equal to means comparison while 
//         printf("the number is divisible by 5");
//     }else{
//         printf("the number is not divisible by 5");
//     }
//     return 0;
// }

#include<stdio.h>
void something(char* p[]){
    int i=0;
    while(*p[i]!='\0'){
        if(*p[i]=="a" || *p[i]=="e" || *p[i]=="i" || *p[i]=="o" || *p[i]=="u" ){
            i++;
        }else{
            printf("%c",p[i]);
        }
    }
}
int main(){
    char p[100];
    scanf("%s",p);
    something(&p);
    return 0;
}