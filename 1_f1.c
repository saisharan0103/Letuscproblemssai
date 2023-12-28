#include <stdio.h>
int main(){

    float a;
    printf("Enter the Salary:");
    scanf("%f",&a);

    printf("The Gross Salary is %.2f", (a+(0.2*a)+(0.4*a)));
    return 0;

}