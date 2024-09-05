#include<stdio.h>
#include<math.h>
int main()
{
    double price[3];
    printf("enter the price of wheat: ");
    scanf("%lf",&price[0]);
    printf("enter the price of rice: ");
    scanf("%lf",&price[1]);
    printf("enter the price of meat: ");
    scanf("%lf",&price[2]);
    printf("wheat :%lf\n", price[0]+(price[0]*0.18));
    printf("rice :%lf\n", price[1]+(price[1]*0.18));
    printf("meat :%lf\n", price[2]+(price[2]*0.18));
    return 0;
}