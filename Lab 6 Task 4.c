#include<stdio.h>
int main(){
    int N;
    int t=0;
    int i;
    printf("Enter number of days: ");
    scanf("%d", &N);
    for(i=1;i<= N;i++){
        t=t+i;
    }
    printf("Total distance covered: %d km", t);
    return 0;
}
