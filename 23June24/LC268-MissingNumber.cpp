//leetcode 268 Easy
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingNumber(vector<int>arr,int size){
    //Sorting array O(log(n))
    sort(arr.begin(),arr.end());

    //Using binary search
    int start=0,mid=0,end=arr.size()-1;
    int compute=-1;

    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid]==mid){
            //This means element should be in right
            start = mid + 1;
        }
        else if(arr[mid] != mid){
            //This means element should be in left but the catch is don't know the exact
            // so i will store elements and go left and if again match not found so store it again by replacing old
            // store and compute
            compute = mid;

            // moving left
            end = mid - 1;
        }
    }

    // here if the nth element is missing then the code is unable to compute
    // so i will return itself

    if(compute==-1){ 
        return arr.size();
    }

    return compute;

}

int main(){
    vector<int>arr{1,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    int element = missingNumber(arr,size);
    cout<<"Missing element is : "<<element<<endl;
    return 0;
} 