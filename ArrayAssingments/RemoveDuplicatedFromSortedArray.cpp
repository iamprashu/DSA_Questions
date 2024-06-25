#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{0,0,1,1,1,2,2,3,3,4};
    int i=0,j=1;
    while(j<arr.size()){
        if(arr[i]==arr[j]){
            j++;
        }else{
            i++;
            arr[i]=arr[j];
            j++;
        }
    }
    int countofunique = i+1;
    cout<<countofunique<<endl;

    for(auto i: arr){
        cout<<arr[i]<<" ";
    }
} 