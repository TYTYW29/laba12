#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double productOfPositives(double arr[], int n) {
    double product = 1.0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            product *= arr[i];
        }
    }

    return product;
}
double sumBeforeMin(double arr[], int n) {
    double minElement = arr[0];
    double sum = 0.0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            break;
        }
        sum += arr[i];
    }

    return sum;
}

int main() {
    system("chcp 65001");
    double A[] = {3, 8, -2, 5, 0, -1, 7, 0, 8};
    int n = sizeof(A) / sizeof(A[0]);
    double product = productOfPositives(A, n);
    double sum = sumBeforeMin(A, n);
    vector<double> evenPos, oddPos;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenPos.push_back(A[i]);
        } else {
            oddPos.push_back(A[i]);
        }
    }
    sort(evenPos.begin(), evenPos.end());
    sort(oddPos.begin(), oddPos.end());

    // Вивід результатів
    cout << "Добуток додатних елементів: " << product << endl;
    cout << "Сума елементів до мінімального: " << sum << endl;

    cout << "Елементи на парних позиціях: ";
    for (const auto &elem : evenPos) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Елементи на непарних позиціях: ";
    for (const auto &elem : oddPos) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
