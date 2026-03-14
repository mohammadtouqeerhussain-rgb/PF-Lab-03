#include<stdio.h>
int main(){
    char c[100];
    int i=0;
    printf("Enter sentence:\n");
    scanf("%[^\n]",c);
    while(c[i] != '\0'){
        if(c[i]>='a' && c[i]<='z'){
            c[i] = c[i]-32;
        }
        else if(c[i]>='A' && c[i]<='Z'){
            c[i] = c[i]+32;
        }
        i++;
    }
    printf("Converted: %s",c);
    return 0;
}

