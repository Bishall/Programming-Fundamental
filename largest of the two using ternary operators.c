/*
Student: Bishal K.C
Roll no.: 10
Subject: Programming Fundamental
Lab sheet: 11
Program: WAP to find largest of the two numbers using ternary operators
Date: 2016/12/12
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;

    printf("Enter the first number:\n");
    scanf("%d",&a);

    printf("Enter the second number:\n");
    scanf("%d",&b);



    (a>b)?printf("A is the largest:%d",a):printf("B is the largest:%d",b);


getch();
return(0);
}
