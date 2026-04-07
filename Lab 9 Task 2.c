#include<stdio.h>
float applyDiscount(float price, int tier);
void printInvoice(float original, float discounted);
int main(){
    float price;
    int tier;
    printf("Enter original price and membership tier (1:Bronze, 2:Silver, 3:Gold, 4:Platinum): ");
    scanf("%f %d", &price, &tier);
    float discountedPrice=applyDiscount(price, tier);
    printInvoice(price, discountedPrice);
    return 0;
}
float applyDiscount(float price, int tier) {
    float discountRate=0;
    if(tier==1)discountRate=0.05;
    else if(tier==2)discountRate=0.10;
    else if(tier==3)discountRate=0.20;
    else if(tier==4)discountRate=0.30;
    return price*(1-discountRate);
}
void printInvoice(float original, float discounted) {
    float delivery=(discounted < 2000) ? 150.0 : 0.0;
    printf("\n--- INVOICE ---\n");
    printf("Original Price: Rs. %.2f\n", original);
    printf("Discount Amount: Rs. %.2f\n", original - discounted);
    printf("Delivery Charge: Rs. %.2f\n", delivery);
    printf("Total Payable: Rs. %.2f\n", discounted + delivery);
}
