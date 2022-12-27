#include <stdio.h>

int main(){

int n,i,a[100],avg,r;

printf("Name – Mishita Saxena \n");

printf("Roll no. - 2100321530103 \n");

printf("Enter the no. of students..");

scanf("%d",&n);

printf("Enter the marks..");

for(i=0;i<n;i++){

scanf("%d",&a[i]);

}

for(i=0;i<n;i++){

avg = avg + a[i];

}r = avg/n;

printf("%d",r);

}
