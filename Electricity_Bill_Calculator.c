#include<stdio.h>
int main()
{
    int cust_no;
    int unit_consumed;
    float chrg=0,surchrge=0,total_amnt=0,amnt=0;
    printf("Enter customer number: (+91) ");
    scanf("%d",&cust_no);
    printf("Enter the unit consumed: ");
    scanf("%d",&unit_consumed);
    if (unit_consumed<200)
    {
        chrg=0.50;
        surchrge=0;
        amnt=unit_consumed*chrg;
        total_amnt=amnt+surchrge;
    }
    else if(unit_consumed>=200 && unit_consumed<400)
    {
        chrg=0.65;
        surchrge=100;
        amnt=unit_consumed*chrg;
        total_amnt=amnt+surchrge;       
    }
    else if (unit_consumed>=400 && unit_consumed<600)
    {
        chrg=0.80;
        surchrge=230;
        amnt=unit_consumed*chrg;
        total_amnt=amnt+surchrge;
    }
    else
    {
        chrg=1.00;
        surchrge=390;
        amnt=unit_consumed*chrg;
        total_amnt=amnt+surchrge;       
    }
    printf("Amount to be paid: %0.2f",total_amnt);
    return 0;
}