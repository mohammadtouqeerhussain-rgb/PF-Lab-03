#include <stdio.h>

int main() {
	int i;
    FILE *fptr;
    int score, sum = 0, val;

    fptr = fopen("survey.txt", "w");
    for ( i = 0; i < 5; i++) {
        printf("Enter score (1-10): ");
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }
    fclose(fptr);

    fptr = fopen("survey.txt", "r");
    for (i = 0; i < 5; i++) {
        fscanf(fptr, "%d", &val);
        sum += val;
    }
    fclose(fptr);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / 5);

    return 0;
}
