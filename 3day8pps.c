#include<stdio.h>
void main(){
int n,sum=0;
printf("enter a number");
scanf("%d",&n);
if(n/10==0){
    printf("%d",n);
}else{
while(n/10!=0){
sum=0;
while(n>0){
sum=sum+n%10;
n=n/10;}
if(sum%10!=0){
n=sum;}}
printf("%d",sum);}}
