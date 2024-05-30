#include<iostream>
#include<vector>
using namespace std;

void FindMinimum(vector<vector<int>>arr){
    int answer=INT32_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
       for (int j = 0; j < arr[0].size(); j++)
       {
            int curret_element=arr[i][j];

            if(curret_element<answer){
                answer=curret_element;
            }
       }
       
    }
    cout<<"smallest Element in Matrix is  :> "<<answer<<endl;
    
}

int main(){
    vector<vector<int>>arr={
        {1,2,3,4,5,6},
        {123,43,-12,234,0},
        {1222,34,-6,21234,-44}
    };

    FindMinimum(arr);

    return 0;
}
