#include<stdio.h>
typedef struct{
int rollno;
char name[20];
float mark1,mark2,mark3;
}student;
int main(){
int n;
printf("enter the limit");
scanf("%d",&n);
student s[n];
for(int i=0;i<n;i++){
   printf("enter rollno:");
   scanf("%d",&s[i].rollno);
   printf("enter name:");
   scanf("%s",s[i].name);
   printf("enter the mark1:");
   scanf("%f",&s[i].mark1);
   printf("enter the mark2:");
   scanf("%f",&s[i].mark2);
   printf("enter the mark3:");
   scanf("%f",&s[i].mark3);
   }
   int tot=0;
   for(int i=0;i<n;i++){
      tot+=s[i].mark1+s[i].mark2+s[i].mark3;
  }
  int avg=tot/n;
  printf("average=%d\n total=%d",avg,tot);
  return 0;
   }
