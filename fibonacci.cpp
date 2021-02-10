#include <iostream>
#include <cstdlib>

int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    // f(n) = f(n - 1) + f(n-2) sum of the two previous ones
    for(int i = 2; i < 60; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for(int j = 0; j < 60; j++){
        std::cout << fib[j] << std::endl;
    }
    return 0;
}