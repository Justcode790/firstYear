#include<stdio.h>
int main(){
    int NA[5];
    for(int i=0;i<5;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&NA[i]);
    }
    for(int i=4;i>=0;i--){
        printf("%d number is : ",i+1);
        printf("%d\n",NA[i]);
    }

    return 0;
}