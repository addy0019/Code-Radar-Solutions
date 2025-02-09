#include <stdio.h>

int main() {
      int num1, num2;    
    scanf("%d %d", &num1, &num2);
    if (num1 < num2) {
        printf("%d True %d.\n");
    } else {
        printf("%d False %d.\n");
    }

    return 0;
}
