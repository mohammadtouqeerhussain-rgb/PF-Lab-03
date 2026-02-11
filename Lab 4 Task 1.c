#include <stdio.h> 
int main() { 
float atn; 
printf("Enter attendance percentage: "); 
scanf("%f", &atn); 
if (atn >= 75) { 
printf("Eligible for Exams\n"); 
} else { 
printf("Not Eligible\n"); 
} 
return 0; 
}
