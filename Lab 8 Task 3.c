#include<stdio.h>
int main(){
    int temp[7][3]={{30,35,28},{32,36,29},{31,34,27},{33,37,30},{34,38,31},{35,39,32},{36,40,33}};
    int i,j,max=temp[0][0],sum;
    for(i=0;i<7;i++){
        for(j=0;j<3;j++){
            if(temp[i][j]>max)max=temp[i][j];
        }
    }
    printf("Highest temperature = %d\n", max);
    for(i=0;i<7;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=temp[i][j];
        }
        printf("Average day %d = %.2f\n", i+1, sum/3.0);
    }
    return 0;
}

