#include<stdio.h>
#include<math.h>
int main(){
    float x,y,r,pi;
    printf("Enter x :");
    scanf("%f", &x);
    printf("Enter y :");
    scanf("%f", &y);

    r = sqrt(pow(x,2)+pow(y,2));
    pi = atan(y/x);

    printf("R = %f \nPi = %f", r, pi);
    return 0;
}