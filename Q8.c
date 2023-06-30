/*
Write a program to find the second smallest number in an array.Take array values
from the user.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n=10;
    int a[n];
    printf("Enter any 10 no.:- ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<n-1;j++)
        for(i=0;i<n-1;i++)
            if(a[i]>a[i+1])
             {
                 a[i]=a[i]+a[i+1];
                 a[i+1]=a[i]-a[i+1];
                 a[i]=a[i]-a[i+1];
             }
    for(i=1;a[0]==a[i];i++);
        if(i==n)
            printf("\nAll values are equal\n");
        else
            printf("second smallest no.:- %d",a[i]);
    getch();
    return 0;
}
