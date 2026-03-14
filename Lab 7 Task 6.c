#include<stdio.h>
int main() {
    char n[100];
    int i=0;
    int vowels=0, consonants=0;
    printf("Enter word: ");
    scanf("%s",n);
    while(n[i]!='\0'){
        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'
        || n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U'){
            vowels++;
        }
        else{
            consonants++;
        }
        i++;
    }
    printf("Vowels = %d\n",vowels);
    printf("Consonants = %d",consonants);
    return 0;
}
