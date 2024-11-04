#include <iostream>

using namespace std;

void countElements(int arr[], int size) {
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }

    cout << "Положительных элементов: " << positive << endl;
    cout << "Отрицательных элементов: " << negative << endl;
    cout << "Нулевых элементов: " << zero << endl;
}

int main() {
    int arr[] = { 1, -2, 0, 3, -4, 0, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    countElements(arr, size);

    return 0;
}
