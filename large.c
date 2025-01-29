#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    printf("enter third number:");
    scanf("%d",&num3);
    if(num1>num2){
       if(num1>num3){
         printf("first number is larger");
         }
    }
    else if(num2>num3){
           
              printf("num2 is larger");
           }
    
    else{
       printf("num3 is larger");
    }

return 0;
    }      
