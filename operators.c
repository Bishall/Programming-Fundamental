/*
Student Name: Bishal K.C
Subject: Programming Fundamental
Lab Sheet: 08
Program: WAP to use assignment operators
Date: 2016/11/30
*/

#include<stdio.h>
#include<conio.h>

int main(){
int a,b;

printf("Enter First No.:");
scanf("%d",&a);

printf("Enter Second No.:");
scanf("%d",&b);

a+=b;
a-=b;
a*=b;
a/=b;

printf("+=%d\n",a);
printf("-=%d\n",a);
printf("*=%d\n",a);
printf("/=%d\n",a);

getch();
return(0);
}


