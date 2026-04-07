#include<stdio.h>
int main(){
    int vibrations=847;
    float temperature=73.6;
    char status='W';
    void *sensor;
    
    sensor=&vibrations;
    printf("Vibrations: %d | Address: %p\n", *(int *)sensor, sensor);
   
    sensor=&temperature;
    printf("Temperature: %.1f | Address: %p\n", *(float *)sensor, sensor);
    sensor = &status;
    printf("Status: %c | Address: %p\n", *(char *)sensor, sensor);
    if(*(char *)sensor=='N')
	printf("Alert: Normal\n");
    else if(*(char*)sensor=='W') 
	printf("Alert: Warning!\n");
    else if(*(char*)sensor=='C')
	 printf("Alert: Critical!\n");
    return 0;
}
