/*
Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("Enter any no:- ");
    scanf("%d",&n);
    int a[n];
    printf("Enter any %d  number: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Reverse order: \n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    getch();
    return 0;
}
