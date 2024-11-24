#include <iostream>
using namespace std;

double factorial(double num);
double combination(int n, int r);


int main()
{
    cout << "Enter number of rows of pascal triangle: ";
    int rows = 0;
    cin >> rows;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            cout << " ";45
        }

        for (int j = 0; j < i + 1; j++) {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}
double factorial(double num) {
    double product = 1;
    while (num > 0) {
        product *= num;
        num--;
    }
    return product;
}
double combination(int n, int r) {
    double numerator = factorial(n);
    double denominator = factorial(n - r) * factorial(r);
    return numerator / denominator;
}