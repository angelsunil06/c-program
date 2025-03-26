#include<stdio.h>
int power(int base,int exp){
if (exp==0){
     return 1;
     }
   
else{
    return base*power(base,exp-1);
    }}
    
int main(){
int base,exp,result;
printf("enter base:");
scanf("%d",&base);
printf("enter exponent");
scanf("%d",&exp);
result=power( base,exp);
printf("%d",result);
return 0;
}



     
      
