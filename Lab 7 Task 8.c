#include <stdio.h>
int main() {
    char n[20];
    int i=0;
    printf("Enter characters:\n");
    scanf("%s",n);
    printf("Non alphabetic characters: ");
    while(n[i] != '\0')
    {
        if(!((n[i]>='A' && n[i]<='Z') || (n[i]>='a' && n[i]<='z')))
        {
            printf("%c",n[i]);
        }
        i++;
    }
    return 0;
}
