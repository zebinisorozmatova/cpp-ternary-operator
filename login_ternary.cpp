#include <iostream>
#include <string>
using namespace std;

int main() {
    string login = "admin";
    string password = "1234";

    string res = (login == "admin" && password == "1234") ? "Xush kelibsiz!" : "Xato login yoki parol";
    cout << res;
}