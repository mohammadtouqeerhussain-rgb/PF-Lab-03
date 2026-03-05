#include<stdio.h>
int main(){
    int p;
    printf("Enter PIN: ");
    scanf("%d", &p);
    while(p!=5555) {
        printf("Incorrect PIN\n");
        printf("Enter PIN again: ");
        scanf("%d", &p);
    }
    printf("Access Granted");
    return 0;
}
