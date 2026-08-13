#include<stdio.h>
void main ()
{
    float min;
    float hr;
    printf("Enter the number of min: ");
    scanf("%f",&min);
    hr=min/60;
    printf("%f minutes = %f hours",min,hr);
}
