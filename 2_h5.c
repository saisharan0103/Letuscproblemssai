#include<stdio.h>
#include<math.h>
int main(){
    float l1,l2,g1,g2,D;
    printf("Enter the Coordinates of latitudes (l1, l2) :");
    scanf("%f %f", &l1, &l2);
    printf("Enter the Coordinates of latitudes (g1, g2) :");
    scanf("%f %f", &g1, &g2);

    D = 3963 * acos(sin(l1)*sin(l2) + cos(l1)*cos(l2) * cos ( g2 - g1 ) );
    printf("Distance between them is %.2f", D);
    return 0;

}