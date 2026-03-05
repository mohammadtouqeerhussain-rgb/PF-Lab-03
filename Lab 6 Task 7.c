#include<stdio.h>
int main(){
    int choice;
    do{
        printf("\n1. Issue Book\n");
        printf("2. Return Book\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if(choice==1){
            printf("Book Issued\n");
        }
        else if(choice==2) {
            printf("Book Returned\n");
        }
    } while(choice!=3);
    return 0;
}
