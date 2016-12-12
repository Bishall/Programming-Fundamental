/*
Student: Bishal K.C
Roll no.: 10
Subject: Programming Fundamental
Lab sheet: 11
Program: WAP to find largest of the three numbers
Date: 2016/12/12
*/

#include<stdio.h>
#include<conio.h>

int main(){
int a,b,c;

    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the Second number:");
    scanf("%d",&b);

    printf("Enter the third number:");
    scanf("%d",&c);

    if(a>=b&&a>=c){
        printf("A is greater:%d",a);
    }
   else if(b>=a&&b>=c){
        printf("B is greater:%d",b);
    }

    else {
        printf("C is greater:%d",c);

    }




return(0);
}
