#include<stdio.h>
#define size 10
#include<stdlib.h>
struct stack{
 int data[10];
 int top;
};
void main(){
struct stack a,*b,p;
b=&a;
initialise(b);
push(b,10);
push(b,20);
pop(b);
pop(b);
pop(p);
}
void initialise(struct stack*p){
 p->top=-1;
}
void push(struct stack*p,int n){
 if(p->top==size-1){
   printf("overflow");
   exit(1);
 }
 else{
   p->top=p->top+1;
   p->data[p->top]=n;
 }
}
int pop(struct stack*p){
  if(p->top==-1){
   printf("underflow");
   exit(1);
  }
  else{
    printf("%d ",p->data[p->top]);
    p->top=p->top-1;
  }
}

