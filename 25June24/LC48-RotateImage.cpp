#include<iostream>
#include<vector>
using namespace std;

void RotateImage(vector<vector<int>> &arr){

    for(int i=0; i<arr.size(); i++ ){

        for(int j=i; j<arr[0].size(); j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0; i<arr.size(); i++){
        int start=0,end=arr[0].size()-1;

        while(start<=end){
            int flash = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = flash;
            start++;
            end--;
        }
    }
}


int main(){
    vector<vector<int>>arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    RotateImage(arr);

    for(int i=0; i<arr.size(); i++ ){

        for(int j=0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;

    
}