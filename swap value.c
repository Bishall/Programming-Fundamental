/*
Student Name: Bishal K.C
Roll no.:10
Subject: Programming Fundamental
Program:WAP to swap two numbers using temporary variable
Date: 2016/12/14
*/

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,temp;

    printf("Enter the first number:\n");
    scanf("%d",&a);

    printf("Enter the second number:\n");
    scanf("%d",&b);

    printf("Before Swapping 'a':%d\n",a);

    printf("Before Swapping 'b':%d\n",b);

    temp=a;
    a=b;
    b=temp;

    printf("After Swapping 'a':%d\n",a);

    printf("After Swap 'b':%d\n",b);

getch();
return(0);
}
