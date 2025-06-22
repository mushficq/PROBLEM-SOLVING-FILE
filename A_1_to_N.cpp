#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid input. Please enter a positive integer." <<endl;
        return 1;
    }

    for (int i = 1; i <= N; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}

