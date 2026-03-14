#include<stdio.h>
int main() {
    int n[10];
    int i;
    int max, min;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    max=min=n[0];
    for(i=1;i<10;i++){
        if(n[i]>max){
            max=n[i];
        }
        if(n[i]<min){
            min=n[i];
        }
    }
    printf("Difference = %d", max-min);
    return 0;
}
