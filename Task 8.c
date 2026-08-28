#include <stdio.h>
int main() {
    int num;
    float f;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", f);
    printf("Character: %c\n", ch);

    return 0;
}

