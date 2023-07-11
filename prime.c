#include<stdio.h>
int main()
{
    int num1,count=0;
    printf("Enter the number: ");
    scanf("%d", &num1);
    for (int i = 1; i <=num1; i++)
    {
        if (num1%i==0)
        {
            count=count+1;
        }
        
    }
    if (count==2)
    {
        printf("It is a prime number.");
    }
    else
    {
        printf("It is not a prime number.");
    }
}