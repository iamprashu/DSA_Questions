#include<iostream>
using namespace std;


void ReverseArray(int arr[],int size){
    int start=0,end=size-1; 
    while(start<=end){
        if(start==end){
            arr[start]=arr[end];

        }else{
        int temp;
        arr[start] =arr[start] ^ arr[end];
        arr[end]=arr[start] ^ arr[end];
        arr[start]=arr[start] ^ arr[end];
        }

        start++;
        end--;
    }
}
 


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;

    ReverseArray(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}