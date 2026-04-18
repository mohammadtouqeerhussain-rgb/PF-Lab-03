#include <stdio.h>

int main() {
    char name[50], buffer[100];
    int s1, s2, s3;
    float avg;
    FILE *fptr;

    printf("Enter name and 3 scores: ");
    scanf("%s %d %d %d", name, &s1, &s2, &s3);
    avg = (s1 + s2 + s3) / 3.0;

    fptr = fopen("report.txt", "w+");
    fprintf(fptr, "Name: %s\nScores: %d, %d, %d\nAverage: %.2f\nStatus: %s\n", 
            name, s1, s2, s3, avg, (avg >= 50) ? "Pass" : "Fail");

    rewind(fptr);

    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);
    return 0;
}
