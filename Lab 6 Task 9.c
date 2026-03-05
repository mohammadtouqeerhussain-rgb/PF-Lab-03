#include<stdio.h>
int main(){
    int N;
    int total=0;
    int i;
    printf("Number of tickets: ");
    scanf("%d", &N);
    for(i=1;i<=N;i++){
        total=total+(i*100);
    }
    printf("Total revenue = %d", total);
    return 0;
}
