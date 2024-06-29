#include<iostream>
#include<vector>
using namespace std;

int GetPiviotIndex(vector<int>arr){
        int start = 0, mid=0, end = arr.size()-1;

        while(start<=end){

            //Handling single element array
            if(start==end){
                return start;
            }
            mid = start + (end - start)/2; //Getting mid with intiger overflow safety

            if(arr[mid] > arr[mid+1] && mid+1 < arr.size()){
                return mid;
            }

            if(arr[start] > arr[mid]){ // ass the element of left side array will be greater than right side array
                end = mid - 1; 
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
}
    //Binary Search Function
int BinarySearch(vector<int>arr,int target, int start, int end){
        while(start<=end){
            int mid = start + (end - start)/2;

            if(arr[mid] == target){
                return mid;
            }
            
            if(target > arr[mid]){
                start = mid + 1;
            }
            else
            {
                end = mid-1;
            }
        }
        return -1;

}
int main() {
    /*As i want to search in rotated sorted array i will first need a point from which the array is rotated*/
    //For that i will Get Piviot index
    vector<int>arr{4,5,6,7,8,9,0,1,2,};
    int target = 0;
    int piviot = GetPiviotIndex(arr); 
   

    //as i got the piviot index so now i have 2 search spaces 
    // 1. 0th element to Piviot index
    // 2. Piviot + 1 Element to end-1;
    // Now i will search the element lies in which row

    if(target >=arr[0] && target <= arr[piviot]){
        int answer = BinarySearch(arr,target,0,piviot);
        return answer;
    }else{
        int answer = BinarySearch(arr,target,piviot+1,arr.size()-1);
        return answer;
    }

    return 0;
}