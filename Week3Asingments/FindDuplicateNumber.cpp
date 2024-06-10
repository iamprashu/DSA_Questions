#include<iostream>
#include<vector>

using namespace std;

int FindDupplicate(vector<int>nums){
    for(int i=0; i<nums.size(); i++){
        //index
        int index = abs(nums[i]);

        //checking visited
        if(nums[index]<0){
            return index;
        }

        nums[index] *= -1;
    }
    return -1;
}



int main(){
    vector<int>nums{1,3,4,2,2};
    cout<<FindDupplicate(nums);    
    return 0;
}