/*
Student Name: Bishal K.C
Subject: Programming Fundamental
Lab Sheet:02
Program: print simple interest operation
Date: 2016/11/25
*/

void main() {
    int p,t,r,SI;

    printf("Enter the value of Principle");
    scanf("%d",&p);

    printf("Enter the value of Time");
    scanf("%d",&t);

    printf("Enter the value of Rate");
    scanf("%d",&r);

    SI=p*t*r/100;

    printf("SI is %d",SI);



getch();
}
