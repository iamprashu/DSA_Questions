#include<iostream>
using namespace std;

int FirstOcc(int arr[],int size,int target){
    int answer=0;
    int start=0,end=size-1,mid=0;

    while(start<=end){
        mid = start+(end-start)/2;

        if(arr[mid]==target){
            answer = mid;

            end = mid-1;
        }

        else if (arr[mid]<target)

        {
            start = mid+1;
        }

        else{
            end = end = mid-1;
        }
        
    }

    return answer;
}

int SecondOcc(int arr[],int size, int target){
    int answer=0;
    int start=0,end=size-1,mid=0;

    while(start<=end){
        mid = start+(end-start)/2;

        if(arr[mid]==target){
            answer = mid;

            start = mid+1;
        }

        else if (arr[mid]<target)

        {
            start = mid+1;
        }

        else{
            end = end = mid-1;
        }
        
    }
    return answer;
}


int main(){
    int arr[]={10,11};
    int size=2;
    int target=3;

    int First=FirstOcc(arr,size,target);
    int Second=SecondOcc(arr,size,target);

    

    // int totalocc=Second-First;
    // totalocc++;
    // cout<<"Total Occ of "<<target<<" is :> "<<totalocc<<endl;
    // return 0;

    if(First==0&&Second==0){
            
            return 0;
            
        }else{
            int totalocc=Second-First;
            totalocc++;
            
    	    cout<<totalocc;
    }

    
}