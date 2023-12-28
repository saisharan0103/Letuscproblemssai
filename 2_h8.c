#include <stdio.h>

int main() {
    int C, D, temp;
    printf("Enter the value for C: ");
    scanf("%d", &C);
    printf("Enter the value for D: ");
    scanf("%d", &D);
    temp = C;
    C = D;
    D = temp;
    printf("After swapping C = %d and D = %d\n", C, D);

    return 0;
}
