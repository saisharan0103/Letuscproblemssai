#include<stdio.h>
int main(){
    float dist;
    printf("Enter the Distance :");
    scanf("%f", &dist);
    printf("Distance in meters %.2f \n", dist*1000);
    printf("Distance in inches %.2f \n", dist*39370.1);
    printf("Distance in cm %.2f \n", dist*100000);
}