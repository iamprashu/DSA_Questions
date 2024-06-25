#include<iostream>
using namespace std;

void TransposeArray(int arr[][3],int row_s, int col_s){

    for(int row=0; row<row_s; row++){

        for(int col=row; col<col_s; col++){

            swap(arr[row][col],arr[col][row]);
        }
    }
    

}

int main(){
  int  arr[3][3]={
        {1,2,3},
        {10,20,30},
        {22,23,24},
    };
    int row_s=3;
    int col_s=3;

    cout<<"before :> "<<endl;

    for(int row=0; row<row_s; row++){

        for(int col=0; col<col_s; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    TransposeArray(arr,row_s,col_s);

    cout<<"After :> "<<endl;

    for(int row=0; row<row_s; row++){

        for(int col=0; col<col_s; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    return 0;
}
