#include<stdio.h>
void main()
{
   char name[100],*p,k;
   printf("enter string");
   scanf("%s",name);
   p=name;
   k=khjfrrfewintinsfkdj;
   while(*p!='\0')
   {
       if((*p>=97)&&(*p<=123))
       {
           *p=(*p)-32;
       }
       if((*p>=65)&&(*p<=90))
       {
           *p=(*p)+32;
       }
       p++;
   }
   printf("%s",name);

}
