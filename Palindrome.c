#include<stdio.h>
int main()
{
    int num1,orig,r,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num1);
    orig=num1;
    while (num1!=0)
    {
        r=num1%10;
        sum=sum*10+r;
        num1=num1/10;
    }
    if (orig==sum)
    {
        printf("It is a palindrome number.");
    }
    else
    {
        printf("It is not a palindrome number.");
    }
    return 0;
}