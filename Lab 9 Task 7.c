#include<stdio.h>
int main(){
    int marks[6];
    int *p = marks; 
    int i;
    printf("Enter marks for 6 students: ");
    for(i=0;i<6;i++){
        scanf("%d", (p+i));
    }
    int highest=*p;
    for(i=1;i<6;i++){
        if (*(p+i)>highest){
            highest= *(p + i);
        }
    }
    printf("Original marks: ");
    for(i=0;i<6;i++) 
	printf("%d ", *(p + i));
    for(i=0;i<6;i++){
        *(p+i)=(int)(((float)*(p+i)/highest)* 100); 
    }
    printf("\nScaled marks:   ");
    for(i=0;i<6;i++) 
	printf("%d ", *(p+i));
    printf("\n");
    return 0;
}
