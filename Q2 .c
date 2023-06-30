/*
Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];
    int i;
    float A=0;
    printf("Enter 10 number:-");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        A=A+a[i];
    A=A/10;
    printf("Avg.=%f",A);
    getch();
    return 0;
}
