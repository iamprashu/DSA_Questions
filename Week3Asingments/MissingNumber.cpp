#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int bruiteforce(vector<int>arr){
    //1. Sort the array
    sort(arr.begin(),arr.end());

    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=i){
            return i;
        }
    }
    return -1;
}

int MissingNumber(vector<int>arr){
    int answer =0;
    
    for(int i=0; i<arr.size(); i++){
        answer^=arr[i];
    }

    for(int i=0; i<=arr.size();i++){
        answer^=i;
    }

    return answer;
}


int main(){
    vector<int>arr{9,6,4,2,3,5,7,0,1};

    // cout<<bruiteforce(arr)<<endl;
    cout<<MissingNumber(arr)<<endl;

    return 0;
}