#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i;
    char name[100];
    int valid = 1;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    int len = strlen(name);

    if (len < 3 || len > 20) {
        valid = 0;
    }

    if (name[0] == ' ' || name[len - 1] == ' ') {
        valid = 0;
    }

    for (i = 0; i < len; i++) {
        if (isdigit(name[i])) {
            valid = 1; 
            valid = 0;
            break;
        }
    }

    if (valid) {
        printf("Valid Name\n");
    } else {
        printf("Invalid Name\n");
    }
    printf("Length: %d\n", len);

    return 0;
}
