#include <iostream>
using namespace std;

void transformArray(int arr[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    cout << "Номер максимального елемента масиву: " << maxIndex << endl;
    int firstZeroIndex = -1, secondZeroIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            if (firstZeroIndex == -1) {
                firstZeroIndex = i;
            } else {
                secondZeroIndex = i;
                break;
            }
        }
    }
    int productBetweenZeros = 1;
    if (firstZeroIndex != -1 && secondZeroIndex != -1 && secondZeroIndex > firstZeroIndex) {
        for (int i = firstZeroIndex + 1; i < secondZeroIndex; i++) {
            productBetweenZeros *= arr[i];
        }
    }
    cout << "Добуток елементів між першим і другим нульовими: " << productBetweenZeros << endl;
    int temp[n];
    for (int i = 0, j = 0; i < n; i += 2, j++) {
        temp[j] = arr[i];
    }
    for (int i = 1, j = n / 2; i < n; i += 2, j++) {
        temp[j] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    system("chcp 65001");
    int A[] = {3, 8, 1, 6, 2, 9, 0, 5, 0, 7};
    int n = sizeof(A) / sizeof(A[0]);

    transformArray(A, n);

    cout << "Масив після перетворення: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
