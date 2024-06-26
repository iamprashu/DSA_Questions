#include<iostream>
#include<vector>

using namespace std;

double BruiteForce(vector<int>arr,int &k){
    int i=0, j = k - 1, MAX_SUM=-123456;

    while (j<arr.size())
    {
        int sum=0;

        for(int s=i; s<=j; s++){
            sum += arr[s];
        }

        MAX_SUM=max(MAX_SUM,sum);

        i++;
        j++;
    }
    //getting average 
    double averageMaxSum = MAX_SUM / double(k);

    return averageMaxSum;
}

double MaximumAverage(vector<int>arr,int k){
    int i=0; int j=k-1;

    int maxsum=-12345678;
    int sum=0;

    for(int s=0; s<=j; s++){
        sum+=arr[s];
    }
    j++;

    while(j<arr.size()){
        sum= sum-arr[i];
        i++;
        sum = sum + arr[j];
        j++;
        maxsum = max(maxsum,sum);
    }
    double Max_average=maxsum /double(k);
    return Max_average;
}

int main(){
    vector<int>arr{4,0,4,3,3};
    int k=4;
    //cout<<BruiteForce(arr,k);
    cout<<MaximumAverage(arr,k)<<endl;

    return 0;
}
