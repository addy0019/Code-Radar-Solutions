#include <stdio.h>
int main() {
    int num1, num2, num3;
    float avg;
    scanf("%d %d %d", &num1,&num2, &num3);
    avg = (num1 + num2 +num3);
    printf("Average: %.2f\n", num1, num2, num3, avg);
    return 0;
}