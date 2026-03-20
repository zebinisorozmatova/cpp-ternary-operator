#include <iostream>
using namespace std;

int main() {
    int score = 85;
    string grade = (score >= 90) ? "A" :
                   (score >= 80) ? "B" :
                   (score >= 70) ? "C" : "F";
    cout << grade;
}