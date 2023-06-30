/*
Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];
    int i,s=0,n=sizeof(a)/sizeof(int);
    printf("Enter any 10 number:- ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        s+=a[i];
    printf("Sum= %d",s);
    getch();
    return 0;
};
