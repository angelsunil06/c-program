/*
author:angel
date:07-02-25
program to perform matrix addition
*/

#include<stdio.h>
int main(){
int row,column;
printf("\nenter the no of rows and columns:");
scanf("%d%d",&row,&column);
int m1[row][column],m2[row][column],m3[row][column];
printf("enter the elements of first matrix:");
for(int i=0;i<row;i++){
 for(int j=0;j<column;j++){
 scanf("%d",&m1[i][j]);
 }}
printf("enter the elements of second matrix:");
for(int i=0;i<row;i++){
 for(int j=0;j<column;j++){
 scanf("%d",&m2[i][j]);
 }}
for(int i=0;i<row;i++){
 for(int j=0;j<column;j++){
  m3[i][j]=m1[i][j]+m2[i][j];

 }
}
for(int i=0;i<row;i++){
 for(int j=0;j<column;j++){
 printf("%d\t",m3[i][j]);
 }
 printf("\n");
 }
return 0;
}
