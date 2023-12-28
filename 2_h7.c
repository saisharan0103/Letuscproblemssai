#include <stdio.h>
#include <math.h>

int main() {
    float degree, radian;
    const float PI = 3.14159;

    printf("Enter angle in degree: ");
    scanf("%f", &degree); 

    radian = degree * (PI / 180.0);

    printf("Sin(%.2f) = %.2f\n", degree, sin(radian));
    printf("Cos(%.2f) = %.2f\n", degree, cos(radian));
    printf("Tan(%.2f) = %.2f\n", degree, tan(radian));
    printf("Cosec(%.2f) = %.2f\n", degree, 1/sin(radian));
    printf("Sec(%.2f) = %.2f\n", degree, 1/cos(radian));
    printf("Cot(%.2f) = %.2f\n", degree, 1/tan(radian));

    return 0;
}
