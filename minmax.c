#include<stdio.h>
int main(){
int limit,i,min,max,minpos,maxpos;
printf("enter the limit:");
scanf("%d",&limit);

int num[limit];
printf("enter the element:");
for(i=0;i<limit;i++){
   scanf("%d",&num[i]);
}
min=num[0];
max=num[0];
for(i=0;i<limit;i++){
 if (num[i]<min){
      min=num[i];
      minpos=i;
 }
 if (num[i]>max){
  max=num[i];
  maxpos=i;
 }
 }
printf("%d is the smallest and is in the %d position",min,minpos+1);
printf("%d is largest and is in the %d position",max,maxpos+1);

return 0;
}
  

