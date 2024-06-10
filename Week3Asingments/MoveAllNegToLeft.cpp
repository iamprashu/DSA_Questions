#include <iostream>
using namespace std;

void MoveNeg(int arr[], int size) {
    int start = 0, end = size - 1;

    while (start <= end) {
        if (arr[start] < 0) {
            start++;
        } else{
            swap(arr[start], arr[end]);
            end--;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Test case 1: All positive numbers
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    MoveNeg(arr1, size1);
    printArray(arr1, size1);  // Expected: 1 2 3 4 5

    // Test case 2: All negative numbers
    int arr2[] = {-1, -2, -3, -4, -5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    MoveNeg(arr2, size2);
    printArray(arr2, size2);  // Expected: -1 -2 -3 -4 -5

    // Test case 3: Mixed positive and negative numbers
    int arr3[] = {1, -2, 3, -4, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    MoveNeg(arr3, size3);
    printArray(arr3, size3);  // Expected: -2 -4 3 1 5

    // Test case 4: Array with all zeros
    int arr4[] = {0, 0, 0, 0, 0};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    MoveNeg(arr4, size4);
    printArray(arr4, size4);  // Expected: 0 0 0 0 0

    // Test case 5: Empty array
    int arr5[] = {};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    MoveNeg(arr5, size5);
    printArray(arr5, size5);  // Expected: (nothing)

    // Test case 6: Large array with random positive and negative numbers
    int arr6[] = {-3, 4, -5, 6, 7, -8, 9, -10, 11, 12, -13, 14, -15, 16, 17};
    int size6 = sizeof(arr6) / sizeof(arr6[0]);
    MoveNeg(arr6, size6);
    printArray(arr6, size6);  // Expected: -3 -5 -8 -10 -13 -15 4 6 7 9 11 12 14 16 17

    return 0;
}
