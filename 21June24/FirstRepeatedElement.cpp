#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

void FirstRepeatedelement(int arr[], int size){
    //i am using unorderd map to get the occurance of elements

    unordered_map<int,int>table;
    
    for(int i=0; i<size; i++){
        table[arr[i]] = table[arr[i]] + 1;
    }

    for(int i=0; i<size; i++){
        if(table[arr[i]]>1){
            cout<<"First Repeated Element is : "<<arr[i]<<endl;
            return;
        }
    }

    cout<<"Not Found";
}

int main(){
    int arr[]{1,5,3,4,3,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    FirstRepeatedelement(arr,size);

    return 0;
}