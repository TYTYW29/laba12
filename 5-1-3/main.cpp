#include <iostream>
#include <limits>
using namespace std;

void transformArray(double arr[], int n) {
    double minElement = numeric_limits<double>::max();
    for (int i = 0; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    cout << "Мінімальний елемент масиву: " << minElement << endl;
    int firstPositiveIndex = -1, lastPositiveIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (firstPositiveIndex == -1) {
                firstPositiveIndex = i;
            }
            lastPositiveIndex = i;
        }
    }
    double sumBetweenPositives = 0;
    if (firstPositiveIndex != -1 && lastPositiveIndex != -1 && lastPositiveIndex > firstPositiveIndex) {
        for (int i = firstPositiveIndex + 1; i < lastPositiveIndex; i++) {
            sumBetweenPositives += arr[i];
        }
    }
    cout << "Сума елементів між першим і останнім додатними: " << sumBetweenPositives << endl;
    int zeroCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            swap(arr[i], arr[zeroCount]);
            zeroCount++;
        }
    }
}
int main() {
    system("chcp 65001");
    double A[] = {0, 3, -2, 5, 0, -1, 7, 0, 8};
    int n = sizeof(A) / sizeof(A[0]);

    transformArray(A, n);

    cout << "Масив після перетворення: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
