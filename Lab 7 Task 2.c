#include<stdio.h>
int main(){
    int n[10];
    int i,num,count=0;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }
    printf("Enter number to search: ");
    scanf("%d",&num);
    for(i=0;i<10;i++){
        if(n[i]==num){
            count++;
        }
    }
    if(count>0){
        printf("Number occurred %d times",count);
    }
    else{
        printf("Number not found");
    }
    return 0;
}
