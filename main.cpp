#include "mbed.h"

Serial pc(USBTX, USBRX);

int fibonacci_recursive(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
    }
}

int main() {
    pc.printf("Fibonacci sequence using recursion:\n");
    
    int term = 10; // Replace with the desired term (position) in the Fibonacci sequence
    
    for (int i = 0; i < term; i++) {
        int fib_value = fibonacci_recursive(i);
        pc.printf("%d ", fib_value);
    }
    
    pc.printf("\n");
}