#include<stdio.h>
int sumarray(int array[],int limit){
 int sum=0;
  printf("enter the elements");
  for(int i=0;i<limit;i++){
      scanf("%d",&array[i]);
 }
 for(int i=0;i<limit;i++){
    sum=sum+array[i];
}
return sum;
}
int sumarray(int[],int);
int main(){
  int limit,sum;
  printf("enter the no of elements in the array");
  scanf("%d",&limit);
  int array[limit];
  sum=sumarray(array,limit);
  printf("%d",sum);
  return 0;
  }
