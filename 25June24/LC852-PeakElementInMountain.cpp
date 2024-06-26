#include<iostream>
#include<vector>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int answer = -1;
        // ia m using binary search
        //making three pointers
        int start=0,mid=0,end=arr.size()-1;

        while(start<=end){
            //Getting mid
            mid = start + (end-start)/2;

            //Right
            if(arr[mid]<arr[mid+1]){
                start = mid + 1;
            }
            else if(arr[mid]>arr[mid+1] && (mid+1)<arr.size())
            {
                // using store and compute
                answer = mid;
                //left
                end = mid -1;
            }
        }

        return answer;
    }

int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,10,7,6,5,4,-2,-1234};

    int answer = peakIndexInMountainArray(arr);

    cout<<"Peak element is :> "<<arr[answer]<<" and it's index is :> "<<answer<<"."<<endl;

    return 0;

}

