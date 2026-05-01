#include <stdio.h>
#include <string.h>
struct Order {
    int orderID;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char status[20];   
};

float computeTotal(struct Order o) {
    return o.quantity * o.unitPrice;
}

void filterByStatus(struct Order orders[], int n, char *status) {
	int i;
    printf("\n Orders with status: %s \n", status);
    int found = 0;
    for ( i = 0; i < n; i++) {
        if (strcmp(orders[i].status, status) == 0) {
            printf("Order ID : %d\n", orders[i].orderID);
            printf("Customer : %s\n", orders[i].customerName);
            printf("Product  : %s\n", orders[i].productName);
            printf("Quantity : %d\n", orders[i].quantity);
            printf("Unit Price: %.2f\n", orders[i].unitPrice);
            printf("Total    : %.2f\n\n", computeTotal(orders[i]));
            found = 1;
        }
    }
    if (!found) {
        printf("No orders found with status: %s\n", status);
    }
}
void clearNewline(char *str) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}
int main() {
    struct Order orders[4];
    int i;
    printf("Enter details for 4 orders:\n");
    for (i = 0; i < 4; i++) {
        printf("\n--- Order %d ---\n", i + 1);
        printf("Order ID: ");
        if (i == 0) getchar();
        scanf("%d", &orders[i].orderID);
        printf("Customer Name: ");
        getchar();
        fgets(orders[i].customerName, sizeof(orders[i].customerName), stdin);
        clearNewline(orders[i].customerName);
        printf("Product Name: ");
        fgets(orders[i].productName, sizeof(orders[i].productName), stdin);
        clearNewline(orders[i].productName);
        printf("Quantity: ");
        scanf("%d", &orders[i].quantity);
        printf("Unit Price: ");
        scanf("%f", &orders[i].unitPrice);
        printf("Status (Pending/Shipped/Delivered): ");
        getchar();
        fgets(orders[i].status, sizeof(orders[i].status), stdin);
        clearNewline(orders[i].status);
    }
    printf("\nItemized Bills \n");
    for (i = 0; i < 4; i++) {
        printf("Order %d | %s | %s | Qty: %d | Unit: %.2f | Total: %.2f | [%s]\n",
               orders[i].orderID,
               orders[i].customerName,
               orders[i].productName,
               orders[i].quantity,
               orders[i].unitPrice,
               computeTotal(orders[i]),
               orders[i].status);
    }
    char targetStatus[20];
    printf("\nEnter status to filter (Pending/Shipped/Delivered): ");
    fgets(targetStatus, sizeof(targetStatus), stdin);
    clearNewline(targetStatus);

    filterByStatus(orders, 4, targetStatus);

    return 0;
}
