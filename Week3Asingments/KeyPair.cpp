#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool SumCheck(vector<int>arr,int size,int target){

    sort(arr.begin(),arr.end());

    int i=0; int j=size-1;

    while (i<j)
    {
        //making sum by pairs
        int sum = arr[i] + arr[j];

        //checking sum if equal to target

        if(sum==target){
            return true;
        }

        if(sum>target){
            j--;
        }

        if(sum<target){
            i++;
        }

    }

    return false;
    
}

int main(){
    vector<int>arr{1,4,45,6,10,8};
    int target =16;
    int size=arr.size();

    bool get = SumCheck(arr,size,target);

    if(get){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found."<<endl;
    }

    return 0;
}