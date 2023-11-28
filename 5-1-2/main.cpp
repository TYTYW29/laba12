#include <iostream>
using namespace std;

void replaceMiddleElements(int arr[], int n) {

    if (n <= 2) {
        cout << "Неможливо виконати заміну для заданого масиву." << endl;
        return;
    }

    for (int i = 1; i < n - 1; i++) {
        arr[i] = (arr[i - 1] + arr[i + 1]) / 2;
    }
}

int main() {
    system("chcp 65001");
    int A[] = {3, 8, 6, 2, 9, 5};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Початковий масив: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    replaceMiddleElements(A, n);

    cout << "Масив після заміни: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}