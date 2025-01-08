#include <stdio.h>
void LCM(int n,int m){
    for(int i=1;i<=n*m;i++){
        if(i%n==0 && i%m==0){
            printf("%d",i);
            break;
        }
    }
}
int main() {
    int n,m;
    printf("Enter two number: ");
    scanf("%d %d",&n,&m);
    LCM(n,m);
    return 0;
}