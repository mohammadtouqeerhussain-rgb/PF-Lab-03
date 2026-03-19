#include<stdio.h>

int main()
{
    int a[5][5];
    int r,c,i,j;

    int zero=1, identity=1, diagonal=1;
    int upper=1, lower=1, symmetric=1;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    if(r==c)
        printf("Square Matrix\n");
    else
        printf("Rectangular Matrix\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
                zero=0;
        }
    }

    if(zero) printf("Zero Matrix\n");

    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j && a[i][j]!=1)
                    identity=0;

                if(i!=j && a[i][j]!=0)
                {
                    identity=0;
                    diagonal=0;
                }
            }
        }

        if(identity) printf("Identity Matrix\n");
        if(diagonal) printf("Diagonal Matrix\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j && a[i][j]!=0)
                upper=0;

            if(i<j && a[i][j]!=0)
                lower=0;
        }
    }

    if(upper) printf("Upper Triangular\n");
    if(lower) printf("Lower Triangular\n");

    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]!=a[j][i])
                    symmetric=0;
            }
        }

        if(symmetric) printf("Symmetric Matrix\n");
    }

    return 0;
}
