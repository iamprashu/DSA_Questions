#include<iostream>
using namespace std;

int GetElement(int arr[], int size){
    int start=0, end = 0;

    while(start<=end)
    {
        int mid = start + (end-start)/2;
        int leftElement = -1;
        int rightElement = -1;
        int currentElement = arr[mid];


        if(mid-1 >= 0){
            leftElement = arr[mid-1];
        }
        if(mid+1 < size){
            rightElement = arr[mid+1];
        }

        //Handeling Single element Case

        if(start==end){
            return arr[start];
        }

        if(currentElement != rightElement && currentElement != leftElement)
        {
            return currentElement; // this condition meets single element
        }

        if(currentElement==leftElement){
            int FirstElementIndex = mid-1;
            if(FirstElementIndex & 1){
                //Moving left if the first element's index in odd
                end = mid - 2;
            }else{
                start = mid + 2;
            }
        }

        if(currentElement==rightElement){
            int FirstElementIndex = mid;
            if(FirstElementIndex & 1){
                //Moving left if the first element's index in odd
                end = mid - 2;
            }else{
                start = mid + 2;//Moving Right
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {9,1,1,2,2};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    int answerElement = GetElement(arr,arr_size);

    cout<<"The odd occuring element is :> "<<answerElement<<endl;

    return 0;
}