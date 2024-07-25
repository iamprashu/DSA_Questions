
/*Given a sorted array arr[] of size N, some elements of array are
 moved to either of the adjacent positions, i.e., arr[i] may 
 be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be 
 swapped with either arr[i+1] or arr[i-1]. The task is to 
 search for an element in this array.*/

#include<iostream>
using namespace std;

int GetSearch(int arr[],int target, int size){
    int start = 0, end = size-1;

    while (start<=end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid]==target){ //Happy Condition
            return mid;
        }
        else if(arr[mid-1]==target && mid-1 >= 0){
            return mid - 1; //Checking if element is sorted nearby
        }
        else if(arr[mid+1]==target && mid+1 < size)
        {
            return mid+1;//checking element is sorted nearby
        }

        if(target > arr[mid]){
            start = mid + 2; //as it already compared -1 and + 1 elements
        }
        else{
            end = mid - 2;
        }
    }
    return -1;
}

int main()
{
    //initial array [3,20,20,40,50,70,80]
    int NearlySorted[] = {10,2,40,20,50,80,70};
    int size = sizeof(NearlySorted) / sizeof(NearlySorted[0]);

    int target = 701;

    int TargetIndex = GetSearch(NearlySorted,target,size);

    cout<<"Target found at "<<TargetIndex<<"th Index."<<endl;
    return 0;
}
