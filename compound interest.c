/*
Student Name: Bishal K.C
Subject: Programming Fundamental
Lab sheet: 06
Program: Compound Interest
Date: 2016/11/25
*/

#include<stdio.h>
#include<conio.h>

    int main() {
    float p,t,r,CI,E;

    printf("Enter the value of the Principle:\n");
    scanf("%f",&p);

    printf("Enter the value of the Time:\n");
    scanf("%f",&t);

    printf("Enter the value of the Rate:\n");
    scanf("%f",&r);

    E=1+r/100;


    CI=(p*pow(E,t)-1 );

    printf("The value of CI is:%f\n",CI);







getch();
return 0;        
}

