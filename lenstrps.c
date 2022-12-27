#include<stdio.h>
int xstrlen(char*);
void main()
{
    int l;
    char name[10]="xyz";
    l=xstrlen(name);
    printf("length %d",l);
}
 int xstrlen(char*y)
 {
     int p=0;
     while(*y!='\0')
     {
         p++;
         y++;
     }
     return(p);
 }
