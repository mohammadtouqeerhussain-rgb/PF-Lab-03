#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "Admin123";
    char input[50];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%s", input);

        if (strlen(input) == 0) {
            printf("Password cannot be empty.\n");
            continue;
        }

        int res = strcmp(input, password);

        if (res == 0) {
            printf("Access Granted\n");
            return 0;
        } else {
            attempts++;
            if (res < 0) {
                printf("Alphabetically before stored password.\n");
            } else {
                printf("Alphabetically after stored password.\n");
            }

            if (attempts == 2) {
                printf("Hint: First 3 characters are %.3s\n", password);
            }
        }
    }

    printf("User Locked Out\n");
    return 0;
}
