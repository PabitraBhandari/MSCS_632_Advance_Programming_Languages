#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5]{1, 2, 3, 4, 5};
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += arr[i];
    }
    cout << "Sum: " << total << endl;
    delete[] arr;  // Manually free memory
    return 0;
}
