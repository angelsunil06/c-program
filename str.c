#include<stdio.h>
int main(){
  char name[20];
  printf("/nenter your name");
  fgets(name,sizeof(name),stdin);
  printf("welcome%s",name);
  return 0;
}
