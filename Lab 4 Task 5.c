#include <stdio.h> 
 
int main() { 
    int User_Choice; 
    int Ini_Balance = 10000; 
    int Cash_Withdrawal; 
    int De_Amount; 
 
    do { 
        printf("\n\n--- ATM MENU ---\n"); 
        printf("1. Balance Inquiry\n2. Cash Withdrawal\n3. Deposit\n4. Exit\n"); 
        printf("Input your Choice: "); 
        scanf("%d", &User_Choice); 
 
        switch(User_Choice) { 
            case 1: 
                printf("Your Current Balance is -> %d", Ini_Balance); 
                break; 
                
            case 2: 
                printf("Input amount you want to withdraw: "); 
                scanf("%d", &Cash_Withdrawal); 
                
                if (Cash_Withdrawal > Ini_Balance) { 
                    printf("Insufficient Funds!"); 
                } else { 
                    Ini_Balance -= Cash_Withdrawal; 
                    printf("Withdrawal Successful! New Balance: %d", Ini_Balance); 
                } 
                break; 
                
            case 3: 
                printf("Input amount you want to Deposit: "); 
                scanf("%d", &De_Amount); 
                Ini_Balance += De_Amount; 
                printf("Deposit Successful! New Balance: %d", Ini_Balance); 
                break; 
                
            case 4: 
                printf("Thank you for using our ATM. Goodbye!\n"); 
                break; 
                
            default: 
                printf("Invalid Choice. Please try again."); 
        } 
    } while (User_Choice != 4); 
 
    return 0; 
} 
