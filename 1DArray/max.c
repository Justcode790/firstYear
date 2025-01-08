#include<stdio.h>
#include<limits.h>
int main(){
    int max=INT_MIN, marks[5]={1,85,31,35,36};
    for(int i=0;i<5;i++){
        if(max < marks[i]){
            max=marks[i];
        }
      
    }
     printf("%d",max);
    return 0;
}