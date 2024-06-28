#include<iostream>
#include<vector>

using namespace std;

int GetPrerequisite(vector<int>arr){
    int start = 0,mid=0,end=arr.size()-1;

    while(start<=end){

        mid = start + (end-start)/2;

        if(arr[mid] > arr[mid+1] && mid+1 < arr.size()){
            return mid;
        }
        else if(arr[mid]<arr[start]){
            end = mid - 1;
        }
    }
    return -1;
}


int main(){
    vector<int>arr{4,5,6,7,0,1,2};
    int target=0;

    int start=0,end=arr.size()-1;

    if(start==end){
        if(arr[start]==target)
            return start;
        else
            return -1;
    }

    //For Searching in these type of array i need a mid point by which i can do the binary search
    int Prerequisite = GetPrerequisite(arr);
    /*Now i got a middle element by which i can define to which array i should apply the binary search*/

    if(target >=arr[0] && target <= arr[Prerequisite] ){
        
    }

    
    return 0;
}

