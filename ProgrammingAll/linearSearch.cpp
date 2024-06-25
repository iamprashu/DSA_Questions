#include<iostream>
using namespace std;

bool Search(int arr[],int size,int element){
    for(int i=0; i<size; i++){
        if(arr[i]==element){
            return 1;
        }
    }
    return 0;
}

int main(){
    int number;
    cout<<"Please Enter Number to Search :> ";
    cin>>number;

    int arr[10]={1,2,3,33,44,54,67,89,45};
    int size=10;

    if(Search(arr,size,number)){
        cout<<"Found !";
    }else{
        cout<<"Not Found ....";
    }

    return 0;
}