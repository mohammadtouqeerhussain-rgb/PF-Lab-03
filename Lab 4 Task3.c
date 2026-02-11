#include <stdio.h> 
int main(){ 
int num; 
printf("Input a number to check Type: "); 
scanf("%d",&num); 
if(num > 0){ 
printf("Positive"); 
} 
else if(num < 0){ 
printf("Negative"); 
} 
else{ 
printf("Zero"); 
} 
} 
