#include <stdio.h>

int main() {
    FILE *fptr = fopen("config.txt", "r");

    if (fptr == NULL) {
        printf("File not found. Creating default config.txt...\n");
        fptr = fopen("config.txt", "w");
        fprintf(fptr, "max_users=50\ntimeout=30\nmode=active\n");
        fclose(fptr);
    } else {
        printf("Configuration file found and loaded.\n");
        fclose(fptr);
    }

    return 0;
}
