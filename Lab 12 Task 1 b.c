 #include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    float *grades;
    printf("Enter the number of students enrolled: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1;
    }

    grades = (float *)malloc(n * sizeof(float));
    
    if (grades == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter the final grade for each student:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        while (scanf("%f", &grades[i]) != 1) {
            printf("Invalid grade. Enter a number: ");
            while (getchar() != '\n');
        }
    }
    printf("\n--- Grade Book ---\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: %.2f\n", i + 1, grades[i]);
    }
    free(grades);
    grades = NULL;

    return 0;
}

