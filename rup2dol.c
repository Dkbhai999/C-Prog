include<stdio.h>
void main ()
{
    float rup ;
    float dol;
    printf("Enter the amount of rupees: ");
    scanf("%f",&rup);
    dol=rup/90;
    printf("%f rupees = %f dollar",rup,dol);
}
