#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    if (num1 == num2) {
        printf("Both numbers are equal.");
    } else {
        printf("Numbers are not equal");
    }
    return 0;
}