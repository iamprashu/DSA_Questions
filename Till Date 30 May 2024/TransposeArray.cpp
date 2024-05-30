#include<iostream>
using namespace std;

void TransposeArray(int arr[][3],int row_s, int col_s){
    int temp[3][3];

    for(int row=0; row<row_s; row++){

        for(int col=0; col<col_s; col++){
            temp[col][row]=arr[row][col];
        }
    }

    for(int row=0; row<row_s; row++){

        for(int col=0; col<col_s; col++){
            cout<<temp[row][col]<<" ";
        }
        cout<<endl;
    }
    

}

int main(){
  int  arr[3][3]={
        {1,2,3},
        {10,20,30},
        {22,23,24},
    };
    int row_s=3;
    int col_s=row_s;

    TransposeArray(arr,row_s,col_s);

    return 0;
}
