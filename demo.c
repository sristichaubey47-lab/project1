#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x:");
    scanf("%d",&x);
    if(x<70)
    {
        printf("order confirmed");
        printf("\nThank you");
    }
    else
    {
        printf("order limit reached");
        printf("\nThank you");
    }
    return 0;
}