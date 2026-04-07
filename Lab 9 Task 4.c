#include<stdio.h>
int i;
int validatePIN(int storedPIN, int enteredPIN) {
    if(storedPIN==enteredPIN){
        return 1; 
    }
    return 0; 
}
int main(){
    int storedPIN=4729;  
    int enteredPIN;
    int attempts=3;
    for(i=0;i<3;i++){
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPIN);
        if(validatePIN(storedPIN, enteredPIN)){
            printf("Access granted. Welcome!\n");
            return 0; 
        } else{
            attempts--;
            if(attempts>0){
                printf("Incorrect PIN. %d attempts remaining.\n", attempts);
            }
        }
    }
    printf("Card blocked. Contact your bank.\n");
    return 0;
}
