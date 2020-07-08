#include <iostream>

#include "/home/arslanali/arslan-ali/software-development/machine-learning-linux-performance/flame-graph-c++/test-code-flame-graph/include/shared/fibonacci.h"

int Fibonacci::fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}
