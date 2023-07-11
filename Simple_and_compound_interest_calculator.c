#include<stdio.h>
#include<math.h>
int main()
{
    int p=0,t=0;
    float SI=0,CI=0;
    float r=0,amnt=0;
    printf("Enter  principle amount: ");
    scanf("%d",&p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time period in year: ");
    scanf("%d",&t);
    /*Formula for calculating Simple Interest*/
    
    SI=(p*t*r)/100;
    
    /*Formula for calculating Compound Interest*/
    amnt=p*((pow((1+r/100),t)));
    CI= amnt-p;

    printf("Simple Interest is: %0.2f", SI);
    printf("\nCompound Interest is: %0.2f", CI);
    return 0;
}