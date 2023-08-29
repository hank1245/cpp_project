#include <iostream>

void bubblesort(int array[], int size);

int main() {
    using std::cin;
    using std::cout;
    int array[] = {10, 3, 7, 9, 2, 1, 4, 6, 8, 5};
    // bubble sort
    int size = sizeof(array) / sizeof(array[0]);
    bubblesort(array, size);
    for (int i : array) {
        cout << i << '\n';
    }
    return 0;
}

void bubblesort(int array[], int size) {
    int temp;
    for (int j = 0; j < size - 1; j++) {
        for (int i = 0; i < size - 1; i++) {
            if (array[i] < array[i + 1]) {
                continue;
            } else {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}