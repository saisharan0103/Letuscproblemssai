#include<stdio.h>
int main(){
    float l,b,r;
    printf("Enter the Length :");
    scanf("%f", &l);
    printf("Enter the Breadth :");
    scanf("%f", &b);
    printf("Enter the Radius :");
    scanf("%f", &r);

    printf("Area of Rectangle : %.2f\n", (l*b));
    printf("Perimeter of Rectangle : %.2f\n", (2*(l+b)));
    printf("Area of Circle : %.2f\n", (r*r));
    printf("Circumference of Circle : %.2f\n", (22/7*r*r));
    return 0;
}