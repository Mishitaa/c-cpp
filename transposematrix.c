#include <stdio.h>

int main(){

int i,j,n,m;

printf("Name – Mishita Saxena\n");

printf("Roll no. - 2100321530103\n");

printf("Enter the order of array..");

scanf("%d%d",&m,&n);

int a[m][n],b[m][n];

printf("Enter elements of 1st array.. \n");

for(i=0;i<m;i++){

for(j=0;j<n;j++){

scanf("%d",&a[i][j]);

}

}for(i=0;i<m;i++){

for(j=0;j<n;j++){

b[j][i] = a[i][j];

}

}printf("Transpose of the matrix is..\n");

for(i=0;i<n;i++){

for(j=0;j<m;j++){

printf("%d ",b[i][j]);

}printf("\n");

}

}
