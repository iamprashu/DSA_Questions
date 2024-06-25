#include<iostream>
using namespace std;

void DutchAlgo(int arr[],int arr_size){
    int start=0,mid=0,end=arr_size-1;

    while (mid<=end)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[start]);
            start++;
            mid++;
        }
        else if (arr[mid]==1)
        {   
           mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[end]);
            end--;
        }
        
    }
    
}

int main(){
    // int arr[6]={0,1,2,0,1,2};
    // int arr_size=6;
    int arr[12]={0,1,1,0,1,2,1,2,0,0,0,1};
    int arr_size=12;

    DutchAlgo(arr,arr_size);

    for (int i = 0; i < arr_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}