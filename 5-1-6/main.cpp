#include <iostream>
using namespace std;

int countInRange(double arr[], int n, double A, double B) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= A && arr[i] <= B) {
            count++;
        }
    }
    return count;
}
double sumAfterMax(double arr[], int n) {
    double maxElement = arr[0];
    int maxIndex = 0;
    double sum = 0.0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    for (int i = maxIndex + 1; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    system("chcp 65001");
    double A[] = {3, 8, 2, 5, 6, 7, 4, 9, 1};
    int n = sizeof(A) / sizeof(A[0]);
    double lowerBound = 3.0, upperBound = 7.0;
    int countInRangeResult = countInRange(A, n, lowerBound, upperBound);
    double sumAfterMaxResult = sumAfterMax(A, n);
    cout << "Кількість елементів у діапазоні [" << lowerBound << ", " << upperBound << "]: " << countInRangeResult << endl;
    cout << "Сума елементів після максимального елемента: " << sumAfterMaxResult << endl;
    return 0;
}
