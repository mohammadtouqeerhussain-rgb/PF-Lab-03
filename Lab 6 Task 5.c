#include<stdio.h>
int main(){
    int units;
    int sum=0;
    int count=0;
    float avg;
    printf("Daily units (-999 to stop): ");
    scanf("%d", &units);
    while(units != -999){
        sum =sum+units;
        count++;
        printf("Daily units (-999 to stop): ");
        scanf("%d", &units);
    }
    avg =(float)sum/count;
    printf("Average consumption = %.2f units", avg);
    return 0;
}
