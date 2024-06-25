#include<iostream>
using namespace std;

void SortZeroOne(int arr[], int size){
    //count zero and one;
    
    int count_zero=0;
    int count_one=0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0)
        {
            count_zero++;
        }
        else
        {
            count_one++;
        }
    }

    //sorting

        int lol=0;
        fill(arr,arr+count_zero,0);
        fill(arr+count_zero,arr+size,1);
    

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main(){
    int arr[8]={0,0,1,1,0,1,0,1};
    int len = 8;

    SortZeroOne(arr,len);

    return 0;
}