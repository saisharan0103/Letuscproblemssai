#include<stdio.h>
int main(){
    int marks[5];
    int total = 0;

    for(int i=1;i<6;i++){
        printf("Enter the marks in Subject[i] :");
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    printf("Total Marks : %d\n", total);
    printf("Percentage : %d", (total/5));
    return 0;

}