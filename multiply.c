/*
author:angel
date:17-03-25
program to multiply two numbers using a fuction
*/
#include<stdio.h>
int multiply(int num1,int num2);
int main(){
    int num1,num2,product;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    product=multiply(num1,num2);
    printf("the product is %d",product);
    return 0;
    }
 int multiply(int num1,int num2){
    int product=num1*num2;
     return product;
     }
      
      
      
      
