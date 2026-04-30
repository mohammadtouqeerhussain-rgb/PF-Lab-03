#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *sensorBuffer;

    // User configures number of sensors at startup
    printf("Enter the number of temperature sensors (N): ");
    scanf("%d", &n);

    // Allocate buffer of N floats, all initialized to 0.0
    sensorBuffer = (float *)calloc(n, sizeof(float));
    if (sensorBuffer == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Prove initial values are zero-initialized
    printf("\n--- Initial Buffer State (after calloc) ---\n");
    for (i = 0; i < n; i++) {
        printf("Sensor %d: %.2f\n", i + 1, sensorBuffer[i]);
    }

    // Simulate filling buffer with temperature readings
    printf("\nEnter temperature readings for %d sensors:\n", n);
    for (i = 0; i < n; i++) {
        printf("Sensor %d: ", i + 1);
        scanf("%f", &sensorBuffer[i]);
    }

    // Print filled buffer
    printf("\n--- Updated Sensor Buffer ---\n");
    for (i = 0; i < n; i++) {
        printf("Sensor %d: %.2f\n", i + 1, sensorBuffer[i]);
    }

    free(sensorBuffer);
    sensorBuffer = NULL;

    return 0;
}
