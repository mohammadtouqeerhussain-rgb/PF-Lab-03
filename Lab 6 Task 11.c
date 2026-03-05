#include<stdio.h>
int main(){
    float price;
    float total=0;
    int choice;
    do{
        printf("Item price: ");
        scanf("%f", &price);
        total=total+price;
        printf("Add another item? (1=Yes, 0=No): ");
        scanf("%d", &choice);
    }while(choice==1);
    if(total>3000) {
        total=total-total*0.10;
    }
    printf("Final Bill = %.2f", total);
    return 0;
}
