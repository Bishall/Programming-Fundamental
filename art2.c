/*
Student Name: Bishal KC
Subject: Programming Fundamental
Lab sheet: 06
Program: Wap to print arithmetic operation
*/

#include<stdio.h>
#include<conio.h>

void main() {
  int a,b,sum,dif,div,pro;

  printf("Enter the First Number\n");
  scanf("%d",&a);

  printf("Enter the second number\n");
  scanf("%d",&b);

  sum=a+b;

  dif=a-b;

  div=a/b;

  pro=a*b;

  printf("Sum is %d\n",sum);

  printf("difference is %d\n",dif);

  printf("division is %d\n",div);

  printf("product is %d\n",pro);


  getch();
}
