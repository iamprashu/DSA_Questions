#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

void FirstRepeatedelement(int arr[], int size){
    //In this Questions i am using map to get count of elements and than  i look into the map the first element that has count more than 1 i'll 
    // return it.


    unordered_map<int,int>table;//Initilizing unorderd map
    
    for(int i=0; i<size; i++){//This will store count of each element that is present in array
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