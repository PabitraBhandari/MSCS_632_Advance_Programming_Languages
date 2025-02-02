#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = o;  // 'o' is undeclared; should be '0'
    for (int i = o; i < size; i++)  // 'o' instead of '0'
        total += arr[i];  // Missing semicolon
    return total  // Missing semicolon
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[o]);  // 'o' instead of '0'
    int result = calculateSum(numbers, size);
    cout << "Sum in C++" << result << endl;
    return 0;
}
