#include <stdio.h>
#include <string.h>

int main() {
    char email[100], dest[100], display[150] = "Email: ";
    char *atPtr;

    printf("Enter email: ");
    scanf("%s", email);

    strcpy(dest, email);
    atPtr = strchr(dest, '@');

    if (atPtr == NULL) {
        printf("Error: @ not found\n");
    } else {
        char *domain = atPtr + 1;
        if (strstr(domain, ".") != NULL) {
            printf("Domain: %s\n", domain);
        } else {
            printf("Error: Invalid domain format\n");
        }
    }

    strcat(display, email);
    printf("%s\n", display);

    return 0;
}
