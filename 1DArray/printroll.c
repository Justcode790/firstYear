#include<stdio.h>
int main(){
    int marks[5]={1,85,31,35,36};
    for(int i=0;i<5;i++){
        if(marks[i]<35){
            printf("roll %d is less than 35\n",i+1);
        }
        else continue;
    }
    return 0;
}