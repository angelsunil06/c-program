/*
author:angel
date:02-03-24
program to enter student details using structure
*/
#include<stdio.h>
struct student{
   int rollno;
   char name[20];
   float cgpa;
   };
   int main(){
    struct student s1;
    printf("enter the number:");
    scanf("%d",&s1.rollno);
    printf("enter the name:");
    scanf("%s",s1.name);
    printf("enter the cgpa");
    scanf("%f",&s1.cgpa);
    printf("name:%s",s1.name);
    printf("rollno:%f",s1.cgpa);
    return 0;
    }
    
   
   
