/*
author:angel
date:17-03-25
program to check whether a number is odd or even using fuction
*/
#include<stdio.h>
int iseven(int number);
int main(){
  int number,result;
  printf("enter a number:");
  scanf("%d",&number);
  result=iseven(number);
  if (result==1){
    printf("the number is even");
  }
  else{
     printf("the number is odd");
  }
  return 0;
  }
int iseven(int number){
   if(number%2==0){
     return 1;
     }
   else{
       return 0;
   }
   }
     
