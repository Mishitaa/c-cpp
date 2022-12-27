#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  struct node *link;
};
void main(){
 struct node *ptr,*nptr,*start,*ch,*temp;
 ptr=(struct node *)malloc(1*sizeof(struct node));
 printf("enter info");
 scanf("%d",&ptr->info);
 start=ptr;
 printf("continue press 1");
 scanf("%d",&ch);
 while(ch==1){
 nptr=(struct node *)malloc(1*sizeof(struct node));
 printf("enter info");
 scanf("%d",&nptr->info);
 ptr->link=nptr;
 ptr=nptr;
 printf("continue press 1");
 scanf("%d",&ch);
}
ptr->link=NULL;
temp=start;
while(temp!='\0'){
 printf("%d ",temp->info);
 temp=temp->link;
}
}
