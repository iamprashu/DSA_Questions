#include<iostream>
#include<vector>
using namespace std;

void LinearSearch(vector<vector<int>>arr,int search){
    for (int row=0; row<arr.size(); row++)
    {
        for (int col=0; col<arr[0].size(); col++)
        {
            int current_element=arr[row][col];

            if(current_element==search){
                cout<<"True"<<endl;
                return;    
            }
        } 
    }

    cout<<"false";
    
}

int main(){
    vector<vector<int>>arr={
        {1,2,3,4,5},
        {11,12,13,14,15},
        {21,22,23,24,25}
    };
    int search_query;cout<<"Search :> ";cin>>search_query;

   LinearSearch(arr,search_query);
    
}