#include <stdio.h>

int main() {
    int vehicle, type, hours;
    int rate = 0;

    printf("Select Vehicle Type (1=Car, 2=Bike, 3=Bus): ");
    scanf("%d", &vehicle);

    printf("Enter Hours Parked: ");
    scanf("%d", &hours);

    switch(vehicle) {
        case 1: 
            printf("1=Regular (50/hr), 2=VIP (100/hr): ");
            scanf("%d", &type);

            switch(type) {
                case 1: rate = 50; break;
                case 2: rate = 100; break;
                default: printf("Invalid Parking Type\n"); return 0;
            }
            break;

        case 2: 
            printf("1=Regular (20/hr), 2=Premium (40/hr): ");
            scanf("%d", &type);

            switch(type) {
                case 1: rate = 20; break;
                case 2: rate = 40; break;
                default: printf("Invalid Parking Type\n"); return 0;
            }
            break;

        case 3:
            rate = 200;
            break;

        default:
            printf("Invalid Vehicle Type\n");
            return 0;
    }

    printf("Total Parking Fee = Rs. %d\n", rate * hours);

    return 0;
}
