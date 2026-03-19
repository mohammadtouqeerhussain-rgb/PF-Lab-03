#include<stdio.h>
int main(){
    int a[3][3],i,j;
    printf("Enter 3x3 matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    printf("Transpose:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    int det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+ a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    printf("Determinant = %d\n", det);
    return 0;
}

