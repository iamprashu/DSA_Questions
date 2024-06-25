#include<iostream>
using namespace std;

void BinarySearch(int arr[], int size, int target){

    int start=0,end=size-1,mid =0;

    while(start<=end){
        //this is for mid element
        mid = start + (end-start)/2;

        if(arr[mid]==target){
            cout<<"Found"<<endl;
            return;
        }

        if(arr[mid]>target){
            end = mid -1;
        }

        if(arr[mid]<target){
            start = mid +1;
        }

    }

    cout<<"Not Found"<<endl;
}


int main(){
    int arr[]={1,2,3,40,50,60,70,80,100};
    int size = 9;
    int target=12;

    BinarySearch(arr,size,target);

    // if(answer)
    //     cout<<"Found"<<endl;
    // else 
    //     cout<<"Not Found "<<endl;

    return 0;
}