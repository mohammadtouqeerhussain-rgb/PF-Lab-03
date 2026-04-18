#include <stdio.h>
#include <string.h>

int main() {
	int i;
    char names[5][30];
    char search[30];
    int found = 0;

    for ( i = 0; i < 5; i++) {
        printf("Enter student %d name: ", i + 1);
        fgets(names[i], 30, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
    }

    for (i = 0; i < 5; i++) {
        fputs(names[i], stdout);
        printf("\n");
    }

    printf("Enter name to search: ");
    fgets(search, 30, stdin);
    search[strcspn(search, "\n")] = 0;

    for ( i = 0; i < 5; i++) {
        if (strcmp(names[i], search) == 0) {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}
