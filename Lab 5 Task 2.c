#include <stdio.h>

int main() {
    int units;
    int type;  
    float bill;

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 10;
    }
    else if (units > 100 && units <= 300) {
        printf("Enter Customer Type (1=Domestic, 2=Commercial): ");
        scanf("%d", &type);

        if (type == 1) {
            bill = units * 12;
        } else if (type == 2) {
            bill = units * 15;
        } else {
            printf("Invalid Customer Type\n");
            return 0;
        }
    }
    else {
        bill = units * 20;
    }

    printf("Total Bill = Rs. %.2f\n", bill);

    return 0;
}
