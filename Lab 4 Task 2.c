#include <stdio.h> 
int main(){ 
float Unit_Con; 
printf("Input the units you hace consumed: "); 
scanf("%f",&Unit_Con); 
if(Unit_Con <= 100){ 
printf("Low Usage"); 
} 
else if(Unit_Con > 100 && Unit_Con <= 300){ 
printf("Mediun Range"); 
} 
else{ 
printf("High"); 
} 
} 
