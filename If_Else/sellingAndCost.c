#include<stdio.h>
int main(){
    int cost_price,selling_price;
    printf("enter the cost price : ");
    scanf("%d",&cost_price);
    printf("enter the selling price : ");
    scanf("%d",&selling_price);
    if (cost_price<selling_price){
        int profit=selling_price-cost_price;
        printf("the profit is %d",profit);
    }if (cost_price>selling_price)
    {
     int loss=cost_price-selling_price;
        printf("the absolute value is %d",loss);
    }else
    {
           printf("no loss");
    }
    return 0;
}