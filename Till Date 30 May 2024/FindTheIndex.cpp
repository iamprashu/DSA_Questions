#include<iostream>
using namespace std;

void FindIndex(int arr[], int size, int search){
    for(int i=0; i<size; i++){
        int current=arr[i];

        if(current==search){
            cout<<"Found at Index "<<i<<" ."<<endl;
            return;
        }

    }
    cout<<"Not Found at all.";
    
    
}



int main(){
    
    // int arr[]={1,2,3,4,55,34,23,30,7865,45,39}; int size=11;

    cout<<"Please Enter Array Size (Less than 50):> ";
    int size;
    cin>>size;
    int arr[51];

    for(int i=0; i<size; i++){
        cout<<"Value for index :>"<<i<<endl;
        cin>>arr[i];
    }
    cout<<"Array is :"<<endl;
    
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }

    int number;
    cout<<"Please Enter number to check :> ";
    cin>>number;


    FindIndex(arr,size,number);
}