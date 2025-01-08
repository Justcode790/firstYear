#include<stdio.h>
int main(){
    typedef struct complexno
    {
        int real;
        int imaginary;
    }complexno;
    
    complexno num1, num2;
    num1.real=2;
    num1.imaginary=6;

    num2.real=3; 
    num2.imaginary=7;

    complexno result;
    result.real=num1.real+num2.real;
    result.imaginary=num1.imaginary+num2.imaginary;
    printf("%d + %di",result.real,result.imaginary);


    return 0;
}