/*
Write a program in C to copy the elements of one array into another array.Take array
values from the user.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter size of Array: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter elements of Array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(i=0;i<n;i++)
        b[i]=a[i];
     printf("First Array: \n");
      for(i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\n\nSecond Array: \n");
      for(i=0;i<n;i++)
        printf("%d ",b[i]);
      getch();
      return 0;
}
