#include<stdio.h>
#include<string.h>
int main(){
    struct person
    {
        char name[20];
        float salary;
        int age;
    }first,second;
    strcpy(first.name,"Ankit");
    first.salary=56000.25;
   first.age=25;
    printf("Name of first: %s\n",first.name);
    // printf("salary: %.4lf\n",first.salary);
    // printf("age: %d\n",first.age);
    // printf("\n");
    //second
    strcpy(second.name,"Ayush");
    second.salary=85511.56;
    second.age=27;
    // printf("Name: %s\n",second.name);
    // printf("salary: %.4lf\n",second.salary);
    printf("age of second: %d\n",second.age);
    
    
    return 0;
}