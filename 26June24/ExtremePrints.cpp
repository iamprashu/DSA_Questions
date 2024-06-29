#include<iostream>
using namespace std;

void ExtremePrints(int arr[], int size){
    int leftPointer=0;
    int rightPointer=size-1;

    while(leftPointer <= rightPointer){

        if(leftPointer==rightPointer){
            cout<<arr[leftPointer]<<" ";
            leftPointer++;

        }else{   
            cout<<arr[leftPointer]<<" ";
            leftPointer++;

            cout<<arr[rightPointer]<<" ";
            rightPointer--;
        }
    }

}

int main(){
    int arr[]={12,13,14,15,16,17,18,19,20,21,23};
    int size=11;

    ExtremePrints(arr,size);

    return 0;
}