#include <iostream>
#include <algorithm>
using namespace std;

void replaceElements(int arr[], int n, int nth) {
    int sortedArr[n];
    for (int i = 0; i < n; ++i) {
        sortedArr[i] = arr[i];
    }
    sort(sortedArr, sortedArr + n, greater<int>());
    int nthLargest = sortedArr[nth - 1];
    for (int i = 0; i < n; ++i) {
        if (arr[i] > nthLargest) {
            arr[i] = nthLargest;
        }
    }
    cout << "Вхідний масив: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Вихідний масив: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Значення " << nth << "-го за величиною елемента: " << nthLargest << endl;
}
int main() {
    system("chcp 65001");
    const int size = 200;
    int array[size];
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 101;
    }
    int n ;
    cout << "Введіть значення n:";
    cin >> n;
    replaceElements(array, size, n);
    return 0;
}
