#include<iostream>
using namespace std;

int main(){
    int arr[]={1,7,3,6,5,6};
    int size = 6;
    int left_sum=0,rightsum=0;

    for(int i=0; i<size; i++){
        int left_sum=0,rightsum=0;
        //left loop
        for(int j=0; j<i; j++){
            left_sum=left_sum+arr[j];
        }

        for(int k=i+1;k<size; k++){
            rightsum=rightsum + arr[k];
        }
        cout<<"i -"<<i<<" "<<left_sum<<" "<<rightsum<<endl;

        if(rightsum == left_sum){
            cout<<"Answer is "<<i<<endl;
            exit(0);
        }

    }
}