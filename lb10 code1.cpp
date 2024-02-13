#include <iostream>
#include <cmath>
using namespace std;
float squareRootRecursive(float N, float root) {
    if (fabs((root * root) - N) <=0.0001) {
        return root;
    } else {
        return squareRootRecursive(N, root - ((root * root - N) / (2.0 * root)));
    }
}

int main() {
    float N;
    cout << "Enter a positive number to calculate its square root: ";
    cin >> N;

    if (N < 0) {
        cout << "Sorry, wrong input. Re-run the program." <<endl;
    } else {
        float root = N / 2.0;
        float result = squareRootRecursive(N, root);
        cout << "Square root of " << N << " = " << result <<endl;
    }

    return 0;
}
