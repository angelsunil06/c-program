#include<stdio.h>
int main(){
int limit,i,search;
printf("enter the limit:");
scanf("%d",&limit);

int num[limit];
for(i=0;i<limit;i++){

  printf("enter the elements:");
  scanf("%d",&num[i]);
}

printf("enter the element to be searched:");
scanf("%d",&search);
for(i=0;i<limit;i++){
  if (search==num[i]){
     printf("the element exists in the array %d",i+1);
     
  }
}

return 0;
}
  
