#include<stdio.h>
int totalRuns(int arr[], int n);
int highestScore(int arr[], int n);
int aboveAverage(int arr[], int n, float avg);
int i;
int main(){
    int scores[10];
    printf("Enter runs for 10 matches:\n");
    for(i=0;i<10;i++){
        scanf("%d", &scores[i]);
    }
    int total=totalRuns(scores, 10);
    int high=highestScore(scores, 10);
    float avg=(float)total / 10;
    int count=aboveAverage(scores, 10, avg);
    printf("\n--- Performance Report ---\n");
    printf("Total Runs: %d\n", total);
    printf("Average: %.2f\n", avg);
    printf("Highest Score: %d\n", high);
    printf("Matches above average: %d\n", count);
    return 0;
}
int totalRuns(int arr[], int n) {
    int sum=0;
    for(i=0;i<n;i++)sum+=arr[i];
    return sum;
}
int highestScore(int arr[], int n) {
    int max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max)max=arr[i];
    }
    return max;
}
int aboveAverage(int arr[], int n, float avg) {
    int count=0;
    for (i=0;i<n;i++) {
        if (arr[i]>avg) 
		count++;
    }
    return count;
}
