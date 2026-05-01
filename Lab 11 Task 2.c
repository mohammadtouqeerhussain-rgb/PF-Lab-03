#include <stdio.h>
int countUpper(char *str){
if (str[0]=='\0'){
return 0;
}
return ((str[0]>='A'&&str[0]<='Z')?1:0)+countUpper(str +1);}
int countDigits(char *str){
if (str[0]=='\0'){
return 0;
}
return ((str[0]>='0'&&str[0]<='9')?1:0)+countDigits(str +1);}
int main(){
char password[100];
printf("Enter password:");
scanf("%s",password);
printf("Uppercase letters:%d\n",countUpper(password));
printf("Digits:%d\n",countDigits(password));
return 0;
}
