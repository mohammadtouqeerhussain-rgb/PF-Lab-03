#include <stdio.h>
#include <string.h>

int main() {
	int i,j,k;
    char words[6][20];
    int seen[6] = {0};

    for ( i = 0; i < 6; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    for (i = 0; i < 6; i++) {
        if (!seen[i]) {
            int count = 0;
            for (j = 0; j < 6; j++) {
                if (strcmp(words[i], words[j]) == 0) {
                    count++;
                    seen[j] = 1;
                }
            }
            
            for ( k = 0; words[i][k] != '\0'; k++) {
                printf("%c ", words[i][k]);
            }
            printf("- Count: %d\n", count);
        }
    }

    return 0;
}
