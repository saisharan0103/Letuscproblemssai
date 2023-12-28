#include<stdio.h>
int main(){
    float temp;
    printf("Enter the Temperature in F :");
    scanf("%f", &temp);
    float celsius = (temp - 32)*5/9;
    printf("Temperature in Degrees : %.2f", celsius);
    return 0;
}