#include <stdio.h>
#include <stdlib.h>
int main() {
    int *contacts;
    int *temp;
    int i, n1 = 3, n2 = 5;
    contacts = (int *)malloc(n1 * sizeof(int));
    if (contacts == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d contact IDs:\n", n1);
    for (i = 0; i < n1; i++) {
        printf("Contact %d: ", i + 1);
        scanf("%d", &contacts[i]);
    }

    printf("\nInitial contact list (%d contacts):\n", n1);
    for (i = 0; i < n1; i++) {
        printf("Contact %d: %d\n", i + 1, contacts[i]);
    }

    temp = (int *)realloc(contacts, n2 * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(contacts);    
        contacts = NULL;
    contacts = NULL;



 

        return 1;
    }
    contacts = temp;  
    printf("\nEnter %d more contact IDs:\n", n2 - n1);
    for (i = n1; i < n2; i++) {
        printf("Contact %d: ", i + 1);
        scanf("%d", &contacts[i]);
    }
    printf("\nUpdated contact list (%d contacts):\n", n2);
    for (i = 0; i < n2; i++) {
        printf("Contact %d: %d\n", i + 1, contacts[i]);
    }
    free(contacts);
    contacts = NULL;

    return 0;
}
