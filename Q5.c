/*
Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n=10;
    int a[n];
    int i;
    printf("Enter any 10 no:- ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
            {
                a[i]=a[i]+a[i+1];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
            }
    }
    printf("smallest no: %d",a[n-1]);
    getch();
    return 0;
}

