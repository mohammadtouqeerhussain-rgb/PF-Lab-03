#include<stdio.h>
int i;
float totalRevenue(float bills[], int n) {
    float sum=0;
    for(i=0;i<n;i++){
        sum+=bills[i];
    }
    return sum;
}
int bestTable(float bills[], int n) {
    int maxIdx=0; 
    for(i=1;i<n;i++){
        if(bills[i]>bills[maxIdx]){
            maxIdx = i;
        }
    }
    return maxIdx;
}
int isProfitable(float total) {
    return (total>10000) ? 1 : 0; 
}
int main() {
    float bills[5];
    for(i=0;i<5;i++){
        printf("Enter bill for Table %d: ", i+1);
        scanf("%f",&bills[i]);
    }
    float total=totalRevenue(bills, 5);
    int topTable=bestTable(bills, 5);
    printf("\n--- Closing Summary ---\n");
    printf("Total Revenue: Rs. %.2f\n", total);
    printf("Best Performing: Table %d\n", topTable + 1);
    if(isProfitable(total)){
        printf("Verdict: Profitable Night\n");
    } else{
        printf("Verdict: Not Profitable\n");
    }
    return 0;
}
