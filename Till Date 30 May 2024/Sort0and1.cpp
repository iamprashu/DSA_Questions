#include<iostream>
using namespace std;

void segregate0and1(int arr[], int n) {
       int start=0;
       int end = n-1;
       
       while(start<=end){
           if(arr[start]==1){
               //swap code
               int temp = arr[start];
               arr[start] = arr[end];
               arr[end] = temp;
               // end --
               
               end--;
           }else{
               start++;
           }
       }
    }

int main(){
    int arr[]={0,0,1,1,0};
    int n=5;

    segregate0and1(arr,n);
    int i=0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }

}