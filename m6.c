#include<stdio.h>
void main()
{
    int i, j, a[3][3], b[3][3], temp;
    printf("enter the elements of array A: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<i;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
                    }
    }
printf("the transpose of the matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
