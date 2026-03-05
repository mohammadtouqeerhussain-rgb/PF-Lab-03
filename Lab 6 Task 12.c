#include<stdio.h>
int main(){
    int s=50;
    int i=1;
    while(s>0 && i!=0){
        printf("Car arriving? (1=Yes, 0=Stop): ");
        scanf("%d", &i);
        if(i==1){
            s--;
            printf("Remaining spaces: %d\n", s);
        }
        if(s==0){
            printf("Parking Full\n");
        }
    }
    return 0;
}
