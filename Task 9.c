#include <stdio.h>
int main() {
    double value;

    printf("Enter a double value: ");
    scanf("%lf", &value);

    printf("Two decimal: %.2lf\n", value);
    printf("Five decimal: %.5lf\n", value);

    return 0;
}

