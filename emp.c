#include<stdio.h>
typedef struct{
  int empid;
  char empname[20];
  float salary;
}employee;
int main(){
int n;
printf("enter the no of employees:");
scanf("%d",&n);
employee s[n];
for (int i=0;i<n;i++){
   printf("enter id:");
   scanf("%d",&s[i].empid);
   printf("enter name:");
   scanf("%s",s[i].empname);
   printf("enter the salary:");
   scanf("%f",&s[i].salary);
   }
  printf("the student details");
  for(int i=0;i<n;i++){
    printf("name:%s",s[i].empname);
    printf("id:%d",s[i].empid);
    printf("salary:%f",s[i].salary);
    }
    return 0;
    }
    
