#include <stdio.h>

int add(int x, int y) {
    int sum = x;
    for (int i = 0; i < y; i++) {
        sum = sum + 1;  
    }
    return sum;
}

int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result = add(result, a); 
    }
    return result;
}

int main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("%d * %d = %d\n", a, b, multiply(a, b));
    return 0;
}
