/*
author:angel
date:19-02-25
program to compare two strings
*/
#include<stdio.h>
#include<string.h>
int main(){
char str1[100],str2[100];
  printf("enter the first string:");
  scanf("%s",str1);
  printf("enter the second string:");
  scanf("%s",str2);
  int result=strcmp(str1,str2);
  if (result==0){
    printf("the strings are equal");
    }
  else{
   printf("the strings are not equal");
   }
  return 0;
   }
   
