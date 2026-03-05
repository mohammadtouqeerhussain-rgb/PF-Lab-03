#include<stdio.h>
int main(){
    int status;
    int total=0;
    int i;
    for(i=1;i<=25;i++){
        printf("Enter check-in status %d (1=Checked In, 0=Absent): ", i);
        scanf("%d", &status);

        if(status == 1) {
            total++;
        }
    }
    printf("Total members checked in: %d", total);
    return 0;
}
