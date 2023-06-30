/*
Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];
    int i,o=0,e=0;
    printf("Enter 10 numbers:-");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        if(a[i]%2)
          o=o+a[i];
        else
          e=e+a[i];
    printf("\nSum of even numbers=%d",e);
    printf("\nSum of odd numbers=%d",o);
    getch();
    return 0;
}
