#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& nums, int target) {
        int start=0,end=nums.size();
        int a=0;

        if(nums[start]==nums[end]){
            if(nums[start]==target){
                return start;
            }else{
                return -1;
            }
        }

        while(start<=end){
            int mid = start+(end-start)/2;

            if(nums[mid]>nums[a]) //it means we are in array to go right coz elements are greater than 1st element
            {
                start = mid+1; //Going right
            }
            else if(nums[mid]<nums[a]) //it meand we are in that part that is the front part before rotation
            {
                //going left
                end = mid -1;
            }

            if(mid+1 < nums.size() && nums[mid] > nums[mid-1] && nums[mid]>nums[mid+1])
            /*There is only one element that  is greater then both left and right elements of that element 
            that is the element that actually the piviot index and we need to retun piviot + 1*/
            {
                if(nums[mid+1] == target )
                    return mid+1;   
                
            }
        }

        return -1;
    }

int main(){
    vector<int>arr{4,5,6,7,0,1,2};
    int target=0;
   int ans = search(arr,target);

   cout<<ans<<" "<<endl;

   return 0;

}