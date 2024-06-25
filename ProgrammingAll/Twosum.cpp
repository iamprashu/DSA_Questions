#include<iostream>
using namespace std;


bool TwoSum(int arr[], int size, int sum){

    for(int i=0; i<size; i++){

        for(int j=0; j<size; j++){
            if(arr[i]+arr[j]==sum){
                return 1;
            }
        }
    }

    return 0;
}

int main(){
    int arr[]={10,80,20,30,35,20,15};
    int size =5;
    int sum;cin>>sum;

    if(TwoSum(arr,size,sum)){
        cout<<"Found the Sum "<<sum;
    }else{
        cout<<"Not found !";
    }
}