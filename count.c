#include<stdio.h>
int main(){
    FILE *fp1;
    fp1=fopen("ght.txt","r");
    char ch;
    int wordcount=0,sentcount=0,linecount=0;
    while(fscanf(fp1,"%c",&ch)==1){
       if (ch==' '){
          wordcount+=1;
          }
       if (ch=='.'){
         sentcount+=1;
       }
       if(ch=='\n'){
        linecount+=1;
        }
      }
 fclose(fp1);
 printf("wordcount:%d\n",wordcount);
 printf("sentencecount:%d\n",sentcount);
 printf("linecount:%d\n",linecount);
 return 0;
 }
         
         
         
          
          
   
    
    
    
