#include<stdio.h>
#include<string.h>
int main(){
    struct data
    {
        char name[20];
        float dob;
        char fsub[20];
    }first,second,third;
    strcpy(first.name,"Ankit");
    first.dob=04.2005;
    strcpy(first.fsub,"Math");
    printf("Name: %s\n",first.name);
    printf("Dob: %.4lf\n",first.dob);
    printf("Favorite sub: %s\n",first.fsub);
    printf("\n");
    //second
    strcpy(second.name,"Ana");
    second.dob=05.2006;
    strcpy(second.fsub,"science");
    printf("Name: %s\n",second.name);
    printf("Dob: %.4lf\n",second.dob);
    printf("Favorite sub: %s\n",second.fsub);
    //third
    strcpy(third.name,"Anshu");
    third.dob=09.2009;
    strcpy(third.fsub,"science");
    printf("Name: %s\n",third.name);
    printf("Dob: %.4lf\n",third.dob);
    printf("Favorite sub: %s\n",third.fsub);
    printf("\n");
    
    
    return 0;
}