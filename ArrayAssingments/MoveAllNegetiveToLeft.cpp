#include<iostream>
using namespace std;

// Function to move all negative numbers to the left side of the array
void MoveNeg(int arr[], int size) {
    int Left = 0, Right = size-1; // Initialize two pointers, one at the beginning and one at the end of the array

    while (Left <= Right) { // Loop until the two pointers meet
        if (arr[Left] < 0) { // If the current element at Left pointer is negative
            Left++; // Move the Left pointer to the right
        } else { // If the current element at Left pointer is non-negative
            // Swap the elements at Left and Right pointers
            int temp = arr[Right];
            arr[Right] = arr[Left];
            arr[Left] = temp;

            Right--; // Move the Right pointer to the left
        }
    }
}

int main() {
    int arr[] = {12, 11, -13, -5, 6, -7, 5, -3, -6}; // Initialize the array with both positive and negative numbers

    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    MoveNeg(arr, size); // Call the function to move negative numbers to the left side

    for (auto r : arr) { // Loop through the array to print the elements
        cout << r << " "; // Print each element followed by a space
    }
    return 0; // Return 0 to indicate successful execution
}