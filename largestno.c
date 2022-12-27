#include <stdio.h>

int main(){

int a[100],n,i,max;

printf("Name – Mishita Saxena \n");

printf("Roll no. - 2100321530103 \n");

printf("Enter the total no...");

scanf("%d",&n);

printf("Enter the numbers..");

for(i=0;i<n;i++){

scanf("%d",&a[i]);

}

max = a[0];

for(i=0;i<n;i++){

if(a[i]>max){

max=a[i];

}

}

printf("The largest no is..");

printf("%d",max);

}
