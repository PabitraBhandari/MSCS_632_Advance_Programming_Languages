#include <iostream>
using namespace std;

int x = 10;

void func() {
    int y = 20;
    cout << x + y << endl;  // Block scoping
}

int main() {
    func();
    return 0;
}
