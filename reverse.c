/*
author:angel
program to reverse a string
*/

#include<stdio.h>
int main(){
    char str1[20];
    int length;
    printf("enter a string:");
    fgets(str1,sizeof(str1),stdin) ; 
    for(length=0;str1[length]!='\0';length++);
    int i=length-1;
    for(int j=0;j<length/2;j++){
    int temp;
    temp=str1[i];
    str1[i]=str1[j];
    str1[j]=temp;
    i--;
    }
    printf("the reversed string is:");
    puts(str1);
    return 0;
    }
    
    

