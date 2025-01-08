#include<stdio.h>
void palindrome(int a[]){
    int count=0;
    for(int i=0,j=4;i<j;i++,j--){
        if(a[i]==a[j]){
            count++;
        }
    }
    if(count>0) printf("Given array is a palindrome");
    else printf("Given array is not a palindrome"); 
}
int main(){
    int a[5];
    printf("Enter elements of array: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    palindrome(a);
    return 0;
}