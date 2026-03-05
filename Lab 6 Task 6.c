#include<stdio.h>
int main(){
    float salary;
    int i;

    printf("Base salary: ");
    scanf("%f", &salary);
    for(i=1;i<=10;i++){
        salary=salary+salary*0.05;
        printf("Year %d salary = %.2f\n", i, salary);
    }
    return 0;
}
