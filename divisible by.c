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
    int a;

    printf("Enter any number:");
    scanf("%d",&a);

    if(a%5==0)
    {
            if(a%11==0){

        printf("The number is divisible by 5 and 11");
    }
    }


    else{
        printf("The number is not divisible by 5 or 11");
    }




getch();
return(0);
}
