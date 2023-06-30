/*
Write a program to find second largest in an array.Take array values from the user.
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
    for(i=n-2;a[i]==a[n-1];i--);
       if(i==-1)
        printf("\nall values are equal\n");
       else
        printf("second largest no.:- %d",a[i]);
    getch();
    return 0;
}
