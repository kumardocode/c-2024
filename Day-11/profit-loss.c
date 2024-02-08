#include<stdio.h>
int main(){
int costPrice = 0;
int sellingPrice = 0;
printf("Enter cost Price of the PRODUCT : ");
scanf("%d",&costPrice);
printf("\n");
printf("Enter selling Price of the PRODUCT : ");
scanf("%d",&sellingPrice);
printf("\n");
if(costPrice > sellingPrice){
    printf("Seller is in LOSSSSSSSS");
}else if(sellingPrice > costPrice) {
    printf("Seller is in PROFITTTTT");
}
printf("\n");
}
