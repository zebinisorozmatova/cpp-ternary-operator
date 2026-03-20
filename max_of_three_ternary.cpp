#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 7;
    int max = (a > b && a > c) ? a : (b > c ? b : c);
    cout << max;
}