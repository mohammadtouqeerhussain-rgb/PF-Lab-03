#include<stdio.h>
int main(){
    int balance=1000;  
    int usage;
    while(balance>0){
        printf("Data used in MB: ");
        scanf("%d", &usage);
        balance = balance-usage;
        printf("Remaining balance: %d MB\n", balance);
    }
    printf("Data balance finished.");
    return 0;
}
