#include <stdio.h>

int main() {
    int category, item, quantity;
    int price = 0;

    printf("Select Category (1=Fast Food, 2=Desi Food): ");
    scanf("%d", &category);

    switch(category) {
        case 1:
            printf("1=Burger (500), 2=Pizza (1200): ");
            scanf("%d", &item);

            switch(item) {
                case 1: price = 500; printf("Burger Selected\n"); break;
                case 2: price = 1200; printf("Pizza Selected\n"); break;
                default: printf("Invalid Item\n"); return 0;
            }
            break;

        case 2:
            printf("1=Biryani (350), 2=Karahi (1500): ");
            scanf("%d", &item);

            switch(item) {
                case 1: price = 350; printf("Biryani Selected\n"); break;
                case 2: price = 1500; printf("Karahi Selected\n"); break;
                default: printf("Invalid Item\n"); return 0;
            }
            break;

        default:
            printf("Invalid Category\n");
            return 0;
    }

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Total Bill = Rs. %d\n", price * quantity);

    return 0;
}
