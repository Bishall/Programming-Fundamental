/*
Student name: Bishal K.C
Roll no.: 10
Subject: Programming Fundamental
Program: Write a menu based simple calculator
Date: 2016/12/13
*/

#include<stdio.h>
#include<conio.h>

int main(){

    int a,b,n,sum,sub,pro,div;

        printf("\t\t\t\tSIMPLE CALCULATOR\n");
        printf("Choose any number\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");

    printf("Choose any number>>");
    scanf("%d",&n);

    switch(n){

    case 1:
        printf("Enter first number\n");
        scanf("%d",&a);
        printf("Enter second number\n");
        scanf("%d",&b);
        sum=a+b;
        printf("The addition is:%d",sum);
        break;

    case 2:
         printf("Enter first number\n");
        scanf("%d",&a);
        printf("Enter second number\n");
        scanf("%d",&b);
        sub=a-b;
        printf("The Subtraction is:%d",sub);
        break;

    case 3:
         printf("Enter first number\n");
        scanf("%d",&a);
        printf("Enter second number\n");
        scanf("%d",&b);
        pro=a*b;
        printf("The Multiplication is:%d",pro);
        break;

    case 4:
         printf("Enter first number\n");
        scanf("%d",&a);
        printf("Enter second number\n");
        scanf("%d",&b);
        div=a/b;
        printf("The Division is:%d",div);
        break;

    default:
        printf("THANK YOU FOR VISITING:");


    }




return(0);

}
