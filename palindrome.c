#include<stdio.h>
void main()
{
    int n;
 int xyz(int n,int rev,int m);
printf("enter number");
    scanf("%d",&n);
}
int xyz(int n,int rev,int m)
{if(m==0)
{
    if(n==rev){
    return(1);
    }else{
        return(0);
}}
else{
    xyz(n,rev*10+m%10,m/10);

}}


