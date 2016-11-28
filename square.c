/*
Student Name: Bishal K.C
Subject: Programming Fundamental
Lab Sheet:07
Program: WAP to enter any no. and calculate its square
Date: 2016/11/28
*/

#include<math.h>
#include<conio.h>

void main(){
int a,sqr,squareroot;

    printf("Enter the any number:");
    scanf("%d",&a);


    sqr=pow(a,2);
    squareroot=sqrt(a);

    printf("The Square No. is:%d",sqr);
    printf("The Square root of the no. is:%d",squareroot);

getch();
return (0);
}
