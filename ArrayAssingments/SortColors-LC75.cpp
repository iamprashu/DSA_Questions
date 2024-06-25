#include<iostream>
using namespace std;

void sort_color(int arr[],int size){
    int start=0,mid=0,end=size-1;

    while(mid<=end){
        switch(arr[mid]){
            case 0: swap(arr[start],arr[mid]);
            start++;mid++;
            break;

            case 1: mid++;break;

            case 2: swap(arr[mid],arr[end]);
            end--;
            break;
        }
    }
}



int main(){
    int arr[]{0,0,1,0,2,0,2,2,1,1,1,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort_color(arr,size);

    for(auto l:arr){
        cout<<l<<" ";
    }

    return 0;
}