#include<stdio.h>
int main(){
    int rate;
    int ex=0;
    int sat=0;
    int imp=0;
    printf("Enter rating (-1 to stop): ");
    scanf("%d", &rate);
    while(rate!=-1){
        if(rate>=85){
            ex++;
        }
        else if(rate>=60){
            sat++;
        }
        else{
            imp++;
        }
        printf("Enter rating (-1 to stop): ");
        scanf("%d", &rate);
    }
    printf("Excellent: %d\n", ex);
    printf("Satisfactory: %d\n", sat);
    printf("Needs Improvement: %d\n", imp);
    return 0;
}
