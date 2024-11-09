#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1; 
    }
    return n * factorial(n - 1); 
}

int main() {
    int number = 5;
    int result = factorial(number);
    cout << "Factorial of " << number << " is: " << result << endl;

    return 0;
}
