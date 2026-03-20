#include <iostream>
using namespace std;

int main() {
    int a = 7;
    string res = (a > 10) ? "Katta" : (a > 5) ? "O‘rta" : "Kichik";
    cout << res;
}