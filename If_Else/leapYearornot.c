#include<stdio.h>
int main(){
    int year; 
    printf("Enter the year in digit: ");
    scanf("%d",&year);
    if (year%4==0){ // double equal to means comparison while 
        printf("this year is leap year");
    }else{
        printf("this year is not leap year");
    }
    return 0;
}