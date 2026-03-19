#include<stdio.h>
int main(){
    int seats[5][6]={{1,0,1,0,1,0},{1,1,1,0,0,0},{0,0,1,1,1,0},{1,1,0,0,0,0},{1,1,1,1,0,0}};
    int i,j,available=0,maxRow=0,maxCount=0,count;
    for(i=0;i<5;i++){
        count = 0;
        for(j=0;j<6;j++){
            if(seats[i][j]==0){
			
			available++;
		}
            else{
			 count++;
		}
        }
        if(count>maxCount){
            maxCount=count;
            maxRow=i;
        }
    }
    printf("Available seats = %d\n", available);
    printf("Row with maximum bookings = %d\n", maxRow+1);
    return 0;
}

