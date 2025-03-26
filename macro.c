# define pi 3.14
#include<stdio.h>
int main(){
    int radius,height;
    printf("enter the radius:");
    scanf("%d",&radius);
    printf("enter height of cyinder:");
    scanf("%d",&height);
    printf("the area of circle is %f", pi*radius*radius);
    printf("the area of cylinder is %f",2*pi*radius*radius+2*pi*radius*height);
    return 0;
    }
    
