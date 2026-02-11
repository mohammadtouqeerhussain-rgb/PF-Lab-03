#include <stdio.h> 
int main(){ 
float total_amount; 
printf("Input Total Amount: "); 
scanf("%f",&total_amount); 
if(total_amount >= 5000 ){ 
float Dis_amount = total_amount - (total_amount * 0.20);  
printf("Discounted Price -> %.2f%",Dis_amount); 
} 
else if(total_amount >= 3000 ){ 
float Dis_amount = total_amount - (total_amount * 0.10);  
printf("Discounted Price -> %.2f%",Dis_amount); 
} 
else{ 
printf("No Discount"); 
} 
}
