#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

void FirstRepeatedelement(int arr[], int size){
    // In this question, I am using a map to get the count of elements and then I look into the map.
    // The first element that has a count more than 1, I'll return it.

    unordered_map<int, int> table; // Initializing unordered map
    
    for(int i = 0; i < size; i++){ // This will store count of each element that is present in array
        table[arr[i]] = table[arr[i]] + 1;
    }

    for(int i = 0; i < size; i++){ 
        if(table[arr[i]] > 1){
            cout << "First Repeated Element is: " << arr[i] << endl;
            return;
        }
    }

    cout << "Not Found";
}

int main(){
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    FirstRepeatedelement(arr, size);

    return 0;
}
