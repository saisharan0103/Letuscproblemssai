#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,s;
    printf("Enter first side of triangle :");
    scanf("%f", &a);
    printf("Enter second side of triangle :");
    scanf("%f", &b);
    printf("Enter third side of triangle :");
    scanf("%f", &c);

    s = (a+b+c)/2;
    printf("Area of triangle : %f", (sqrt(s*(s-a)*(s-b)*(s-c))));
    return 0;
}