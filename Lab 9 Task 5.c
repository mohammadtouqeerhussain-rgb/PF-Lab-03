#include<stdio.h>
float toMegajoules(float kwh) { return kwh * 3.6; }
float toBTU(float kwh) { return kwh * 3412.14; }
float toCalories(float kwh) { return kwh * 859.845; }
int main(){
    float kwh;
    printf("Enter energy reading in kWh: ");
    scanf("%f", &kwh);
    printf("\n--- Energy Conversion Report ---\n");
    printf("Megajoules: %.2f MJ\n", toMegajoules(kwh)); 
    printf("BTUs:       %.2f BTU\n", toBTU(kwh));
    printf("Calories:   %.2f kcal\n", toCalories(kwh));
    return 0;
}
