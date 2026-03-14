#include<stdio.h>
int main(){
    int n[10];
    int i,j;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(n[i]==n[j]){
                n[j]=-1;
            }
        }
    }
    printf("Updated Array:\n");
    for(i=0;i<10;i++){
        printf("%d ",n[i]);
    }
    return 0;
}
