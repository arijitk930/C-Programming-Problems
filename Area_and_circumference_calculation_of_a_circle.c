#include<stdio.h>
#define PI 3.1415
int main()
{
    float d,r,cir,area;
    printf("Enter the diameter: ");
    scanf("%f",&d);
    r=d/2;
    cir=2*PI*r;
    area=PI*r*r;
    printf("Circumference of the circle is: %0.2f",cir);
    printf("\nArea of the circle is: %0.2f",area);
    return 0;
}