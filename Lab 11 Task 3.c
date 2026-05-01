#include <stdio.h>

int countWays(int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return countWays(n - 1) + countWays(n - 2);
}

void printPaths(int n, int path[], int index) {
	int i;
    if (n == 0) {
        for (i = 0; i < index; i++) {
            printf("%d", path[i]);
            if (i < index - 1)
                printf("+");
        }
        printf("\n");
        return;
    }
    if (n > 0) {
        path[index] = 1;
        printPaths(n - 1, path, index + 1);
    }
    if (n > 1) {
        path[index] = 2;
        printPaths(n - 2, path, index + 1);
    }
}

int main() {
    int n;
    int path[20];
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Total ways: %d\n", countWays(n));
    printf("All paths:\n");
    printPaths(n, path, 0);
    return 0;
}
