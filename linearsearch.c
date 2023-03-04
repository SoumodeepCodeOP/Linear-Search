#include<stdio.h>
int main()
{
    int a[5], i, n;
    printf("Enter five numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            printf("%d is in %d position",n,i);
            return 0;
        }
    }
    printf("/n%d is not found",n);
}