#include<iostream>
using namespace std;

int GetElement(int arr[],int size){

    int start =0, end = size -1;

    while(start<=end){
        int mid = start + (end-start)/2;

        cout<<"mid is :"<<mid<<endl;

        cout<<"Arr[mid]:"<<arr[mid]<<endl<<endl;

        //happy condition
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            //this is the element
            return arr[mid];
        }

        //Moving condition 1
        if(arr[mid] == arr[mid-1])
        {
            //this means that mid is second element of pair
            //checking 1st element is in even index or not
            if((mid-1)%2==0)
            {
                //Go right
                start = mid + 1;
            }
            //if the mid - 1 is odd so going left
            else if ((mid-1)%2 != 0)
            {
                end = mid -1;
            }
        }
        else if(arr[mid] == arr[mid+1])
        {
            if(mid % 2 == 0){
                start = mid + 1;
            }
            else if(mid % 2 != 0)
            {
                end = mid - 1;
            }
        }
    }
}
int main(){
    int arr[] = {9,1,1,2,2,3,3,5,5,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<GetElement(arr,size);

    return 0;
}