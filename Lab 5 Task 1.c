#include <stdio.h>

int main() {
    float cgpa;
    int income;

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter Family Income: ");
    scanf("%d", &income);

    if (cgpa >= 3.5) {
        if (income < 50000) {
            printf("100%% Scholarship\n");
        } else {
            printf("50%% Scholarship\n");
        }
    } 
    else {
        if (cgpa >= 3.0 && income < 40000) {
            printf("25%% Scholarship\n");
        } else {
            printf("No Scholarship\n");
        }
    }

    return 0;
}
