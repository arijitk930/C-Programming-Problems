#include<stdio.h>
int main()
{
    int num1,orig;
    int sum=0;
    int r=0;
    printf("Enter a number: ");
    scanf("%d",&num1);
    orig==num1;
    while (num1!=0)
    {
        r=num1%10;
        sum= (r*r*r)+sum;
        num1=num1/10;
    }
    if (orig==sum)
    printf("It's not an armstrong number.");
    else
    printf("It's  an armstrong number. ");
    return 0;
}