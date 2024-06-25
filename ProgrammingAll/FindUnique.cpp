#include<iostream>
using namespace std;


void FindUnique(int arr[], int size){
        int answer = 0;

        for(int i=0; i<size; i++){
            cout<<"statement "<<i<<"answer = "<<answer<<" element = "<<arr[i]<<endl;
            cout<<"Xoring "<<answer<<" & "<<arr[i]<<" = "<<(answer ^ arr[i])<<endl;
            answer=answer^arr[i];
        }

        cout<<"Unique element is :> "<<answer<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,4,1,3,2,5};
    int length = size(arr);

    FindUnique(arr,length);

    return 0;
}