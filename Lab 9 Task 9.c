#include<stdio.h>
int main(){
	int i,j;
    int seats[3][4]={
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 0, 0}
    };
    int (*rowPtr)[4]=seats; 

    int *basePtr=&seats[0][0];
    int r,c;
    printf("--- Cinema Seating Chart ---\n");
    for(i=0;i<3;i++){
        for (j=0;j<4;j++){
            printf("%d ", *(basePtr+(i*4)+j));
        }
        printf("\n");
    }
    printf("\nEnter Row (0-2) and Column (0-3) to book: ");
    scanf("%d %d", &r, &c);

    if(r>=0&&r<3&&c>=0&&c<4){
        int *targetSeat=(basePtr+(r * 4)+c);
        if(*targetSeat==1){
            printf("Seat [%d][%d] is already BOOKED.\n", r, c);
        } else {
            *targetSeat=1; 
            printf("Success! Seat [%d][%d] is now yours.\n", r, c);
        }
    } else {
        printf("Invalid coordinates.\n");
    }
    return 0;
}
