#include <iostream>

using namespace std;

double average(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "������� �������������� �������: " << average(arr, size) << endl;

    return 0;
}
