#include<iostream>
#include<vector>
using namespace std;

void DiagonalSum(vector<vector<int>>arr){
   int answer=0;

   for (int i = 0; i < arr.size(); i++)
   {
        answer=answer+arr[i][arr.size() - 1 - i];
   }
   cout<<"Diagonal Sum is :> "<<answer;
   
}

int main(){
    vector<vector<int>>arr={
        {10,20,30},
        {100,200,300},
        {1000,2000,3000},
    };

    DiagonalSum(arr);

    return 0;
}
