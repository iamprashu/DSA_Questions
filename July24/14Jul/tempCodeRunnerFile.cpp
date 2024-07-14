#include<iostream>
#include<vector>
using namespace std;

pair<int,int> SearchIn2d(vector<vector<int>>arr,int target){
    int row = arr.size(), col = arr[0].size();
    int elements = row * col;

    int start = 0, end = elements-1;
    
    while (start<=end)
    {
        int mid = start + (end-start)/2;

        int rowIndex = mid / col;
        int colIndex = mid % col;

        if(arr[rowIndex][colIndex] == target){
            pair<int,int>answer;
            answer.first = rowIndex;
            answer.second=colIndex;
            return answer;

        }

        if(target>arr[rowIndex][colIndex]){
            //going right
            start = mid + 1;
        }
        else
        {
            //going left
            end = mid -1;
        }
    }
    
}


int main(){
    vector<vector<int>>arr{
        {1,2,3,4},
        {4,5,6,7},
        {8,9,10,11},
        {12,13,14,15}
    };
    int target = 10;

   pair<int,int> answerIn =  SearchIn2d(arr,target);

   cout<<"Element found at "<<answerIn.first<<", "<<answerIn.second<<" Index"<<endl;
    return 0;
}