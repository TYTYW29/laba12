#include <iostream>

int findFirstZeroIndex(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    system("chcp 65001");
    const int size = 8;
    int numbers[size] = {2, 4, 0, 7, 1, 0, 9, 5}; 

    int zeroIndex = findFirstZeroIndex(numbers, size);

    if (zeroIndex != -1) {
        std::cout << "Індекс першого нульового елемента: " << zeroIndex << std::endl;
    } else {
        std::cout << "Масив не містить нульових елементів." << std::endl;
    }

    return 0;
}
