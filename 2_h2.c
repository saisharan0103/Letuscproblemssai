#include<stdio.h>
int main()
{
    int number=0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        number = number * 10;
        number = n % 10 + number;
        n = n/10;
    }
    printf("Reverse of the number is %d", number);
    return 0;
}