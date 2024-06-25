#include<iostream>
using namespace std;

void RotateByN(int arr[],int size, int rotate){
    //to get exact rotation
    int finalRotation=rotate%size;

    int temp[1000];int index=0;

    //copy last two element into new array
    for(int i=size-1; i>=size-finalRotation; i-- ){
        temp[index]=arr[i];
        index++;
    }

    //Rotating remaining elements

    for (int i = size-1; i>=finalRotation; i--)
    {
       arr[i]=arr[i-finalRotation];
    }

    //copy back array 

    for (int i = 0; i <finalRotation; i++)
    {
        arr[i]=temp[i];
    }
    
    
}



int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int arr_size=10;
    int rotate;
    cout<<"Enter Rotations :> ";
    cin>>rotate;

    cout<<"Printing Before Rotation :"<<endl;
    for(int i=0; i<arr_size; i++){
        cout<<arr[i]<<" ";
    }

    RotateByN(arr,arr_size,rotate);

    cout<<endl<<"Ptinting After rotation : "<<endl;

    for(int i=0; i<arr_size; i++){
        cout<<arr[i]<<" ";
    }
}