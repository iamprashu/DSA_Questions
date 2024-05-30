#include<iostream>
#include<vector>
using namespace std;

void ColWiseSum(vector<vector<int>>arr){
   
    for(int row=0; row<arr.size(); row++){
        int answer=0;
        for(int col=0; col<arr[0].size(); col++){
            answer=answer+arr[col][row];
        }
        cout<<"Sum of row "<<row<<" = "<<answer;
        cout<<endl;
    }
}

int main(){
    vector<vector<int>>arr={
        {10,20,30},
        {100,200,300},
        {1000,2000,3000},
    };

    ColWiseSum(arr);

    return 0;
}
