#include<iostream>
using namespace std;

void RotateArray(int arr[],int size,int shift){
    int finalshift = shift%size;

    if(finalshift==0){
        return;
    }

    int temp[200];
    int tempindex=0;

    for (int i = size-finalshift; i<size; i++)
    {
        temp[tempindex]=arr[i];
        tempindex++;
    }

    for (int i=size-1; i>=0; i--){
            if(i-finalshift >= 0)
                arr[i]=arr[i-finalshift];
    }

    for (int i = 0; i < finalshift; i++)
    {
       arr[i]=temp[i];
    }

}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int shift=6;

    RotateArray(arr,size,shift);

    for (int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}