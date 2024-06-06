#include<iostream>
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

int main(){
    int nums[6]={1,7,3,6,5,6};
    int size = 6;

    cout<<PiviotIndex(nums,size);

    return 0;
}