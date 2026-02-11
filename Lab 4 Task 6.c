#include <stdio.h> 
int main(){ 
int s1,s2,s3,s4,s5; 
float per,sum; 
printf("Input your subjects Marks: "); 
scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5); 
sum = s1 + s2 + s3 + s4 + s5;  
per = sum / 500 * 100; 
if(per <= 100){ 
printf("Percentage -> %.2f%% \n",per); 
if(per >= 85 ){ 
printf("Your Grade is -> A"); 
} 
else if(per >= 70){ 
printf("Your Grade is -> B"); 
} 
else if(per >= 50){ 
printf("Your Grade is -> C"); 
} 
else{ 
printf("Your Grade is -> Fail"); 
} 
} 
else{ 
printf("Invalid Marks"); 
} 
}
