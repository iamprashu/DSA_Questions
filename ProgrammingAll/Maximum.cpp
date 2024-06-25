#include<iostream>
using namespace std;

void FindMax(int arr[], int size){
    long int max=INT64_MIN;
    for(int i=0; i<size; i++){
        int current_element=arr[i];
        if(current_element > max){
            max = current_element;
        }
    }

    cout<<"The Maximum Element of all is :> "<<max;
}

int main(){
    int arr[]={1,13,2,46,5,10,809,2034,748,330,126};
    int arr_size=11;

    FindMax(arr,arr_size);

    return 0;
}