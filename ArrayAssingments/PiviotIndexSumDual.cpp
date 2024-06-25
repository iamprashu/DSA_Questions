#include<iostream>
#include<vector>
using namespace std;

int PiviotIndex(int nums[],int size){
    int left_sum[6]={0},right_sum[6]={0};

    for(int i=1;i<size;i++){
        left_sum[i]=left_sum[i-1]+nums[i-1];
    }

    for(int j=size-2; j>=0; j--){
        right_sum[j]=right_sum[j+1] + nums[j+1];
    }

    for(int final_runner=0; final_runner<size; final_runner++){
        if(left_sum[final_runner]==right_sum[final_runner]){
            return final_runner;
        }
        //Debug -> //cout<<"Left Sum :> "<<left_sum[final_runner]<<" Right Sum :> "<<right_sum[final_runner]<<endl;
    }

    return -1;
}

int PiviotIndex2(vector<int>& nums) {
        // Here i have to complete it by 2 approach

        // 1. Nested loop (Bruitforce)
        // 2. Getting n-1 sum in array run togather

        //i am creating 2 arrays l_sum and r_sum same size as nums initialize by zero
        int size = nums.size();

        vector<int>l_sum(size,0);
        vector<int>r_sum(size,0);

        // as the first element of l_sum and last element of r_sum should be zero because 
        //If the index is on the left edge of the array, then the left sum is 0 because there are no     elements   to the left. This also applies to the right edge of the array.

            // starting loop from 1 for lsum
            
            for(int i=1; i<size; i++){
                l_sum[i] = l_sum[i - 1] + nums[i - 1];
                // This Will Store Sum of each iteration in lsum
            }

            // For r_sum i am using i = nums.size-2 because last element is empty that is n-1;

            for(int j = size-2; j >= 0 ; j--){
                r_sum[j] = r_sum[j+1] + nums[j+1];
                //This will store sum of each right iteration in rsum
            }

            // finally cheking the matching index with same sum

            for(int s=0; s<size; s++){
                if(l_sum[s] == r_sum[s]){
                    return s;
                }
            }
        return -1;
    }

    int PiviotIndexPrefixSum(vector<int>& nums) {
    int size = nums.size();
    vector<int> l_sum(size, 0);
    vector<int> r_sum(size, 0);

    for (int i = 1; i < size; ++i) {
        l_sum[i] = l_sum[i - 1] + nums[i - 1];
    }

    for (int j = size - 2; j >= 0; --j) {
        r_sum[j] = r_sum[j + 1] + nums[j + 1];
    }

    for (int s = 0; s < size; ++s) {
        if (l_sum[s] == r_sum[s]) {
            return s;
        }
    }
    return -1;
}

int main(){
    //int nums[6]={1,7,3,6,5,6};
    vector<int>nums{1,7,3,6,5,6};
    int size = 6;

    cout<<PiviotIndexPrefixSum(nums);

    return 0;
}