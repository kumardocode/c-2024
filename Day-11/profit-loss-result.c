#include<stdio.h>
int main() {
int costPrice = 0;
int sellingPrice = 0;
int status = 0;
printf("Enter cost Price of the PRODUCT : ");
scanf("%d",&costPrice);
printf("\n");
printf("Enter selling Price of the PRODUCT : ");
scanf("%d",&sellingPrice);
printf("\n");
if(costPrice > sellingPrice){
    status = costPrice - sellingPrice;
    printf("Seller is in LOSSSSSSSS of  %d", status);
}else {
    status = sellingPrice - costPrice;
    printf("Seller is in PROFITTTTT  of  %d", status);
}
printf("\n");
}
