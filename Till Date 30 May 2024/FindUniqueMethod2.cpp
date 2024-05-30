#include<iostream>
using namespace std;

int FindUnique(int arr[], int n){
    int ans;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
        
}


int main(){
    int arr[9]={1,3,4,5,7,5,4,3,7};
    int size = 9;

    int answer = FindUnique(arr,size);

    cout<<answer;

    return 0;


}