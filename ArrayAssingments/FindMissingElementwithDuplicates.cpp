#include<iostream>
#include<vector>

using namespace std;

// Function to find the smallest missing positive integer in the array
int FindMissing(vector<int> arr) {
    // Iterate over the array
    for(int i = 0; i < arr.size(); i++) {
        int index = abs(arr[i]); // Get the absolute value of the current element

        // Mark the element at position index-1 as visited by making it negative
        // Check if index is within bounds to avoid out-of-bounds access
        if(index > 0 && index <= arr.size() && arr[index-1] > 0) {
            arr[index-1] *= -1;
        }
    }

    // Iterate over the array to find the first positive element
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > 0) { // If a positive element is found, its index+1 is the missing number
            return i + 1;
        }
    }

    return -1; // Return -1 if no missing number is found
}

int main() {
    vector<int> arr {1,2,3,4,6,7,6}; // Initialize the array with zeros

    int answer = FindMissing(arr); // Call the function to find the missing number

    cout << "Missing Element is :> " << answer << endl; // Print the result

    return 0; // Return 0 to indicate successful execution
}
