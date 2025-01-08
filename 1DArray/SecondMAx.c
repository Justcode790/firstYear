// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int a[5]={1,2,8,6,7},max=INT_MIN,smax=INT_MIN; 
//     for(int i=0;i<5;i++){
//         if(max<a[i]){
//             max=a[i];
//         }
//     }
//     for(int i=0;i<5;i++){
//         if(a[i]!=max && smax<a[i]){
//             smax=a[i];
//         }
   
// } printf("%d",smax);
//     return 0;
// }

#include<stdio.h>
#include<limits.h>
int main(){
    int a[5]={1,8,8,6,7},max=INT_MIN,smax=INT_MIN; 
    for(int i=0;i<5;i++){
        
        if(max<a[i]){
            smax=max;
            max=a[i];
        }else if(smax<a[i] && max !=a[i]){
            smax=a[i];
        }
    }        
   printf("%d",smax);
    return 0;
}
