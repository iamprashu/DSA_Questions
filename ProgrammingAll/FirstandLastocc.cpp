#include<iostream>
#include<vector>
using namespace std;

pair<long,long> indexes(vector<long long> arr, long long target)
    {
        int size = arr.size();
        int start = 0;
        int end = size-1;
        int mid =0;
        int ione = -1;
        int ilast= -1;
        
        pair<long,long>answer;
        
        
        
        while(start<=end){
            mid = start + (end-start)/2;
            if(arr[mid]==target){
                
                if(ilast == -1 ){
                    ilast=mid;
                    answer.second=ilast;
                }else{
                    ione=mid;
                    answer.first=ione;
                }
                
                end = mid - 1;
            }
            
            if(target>arr[mid]){
                start=mid+1;
            }
            
            if(target<arr[mid]){
                end=mid-1;
            }
        }
        
        return answer;
    }  

int main(){

    vector<long long>arr={1, 3, 5, 5, 5, 5, 67, 123, 125};
    int target = 5;

    pair<int,int> answer = indexes(arr,target);

    cout<<answer.first<<" "<<answer.second<<endl;
    return 0;

}
