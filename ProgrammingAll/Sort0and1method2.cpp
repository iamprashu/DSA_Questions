#include<iostream>
using namespace std;

void Sort0and1(int arr[], int count){
    int zero=0, one=0;
    for (int i = 0; i < count; i++)
    {
       if(arr[i]==0)
            zero++;
        else 
            one++;
    }

    //sorting

    for (int i = 0; i < count; i++)
    {
        if(i<zero){
            arr[i]=0;
        }else{ 
            arr[i]=1;
        }
    }
    
    
}

int main(){ 
    int arr[]={1,1,0,0,0,1,1,0,1,0};
    int len=10;

    Sort0and1(arr,len);

    for (size_t i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}