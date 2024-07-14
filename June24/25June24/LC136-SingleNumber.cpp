#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int SingleNumber(vector<int>arr,int size){
    unordered_map<int,int>data; //Map to store count

    for(int i=0; i<size; i++){
        int current_element = arr[i];

        data[current_element] += 1;

    }
    for(int run=0; run<size; run++){
        int current = arr[run];

        if(data[current]==1){
            return current;
        }
    }

    return -1;
}


int main(){
    vector<int>arr{1,1,2,4,4,3,3,9,9,2,1,2,3,4,5,0,0,5,10};
    int size = arr.size();


    int answer = SingleNumber(arr,size);
    

    cout<<"Single Number is :> "<<answer<<endl;
    return 0;
}