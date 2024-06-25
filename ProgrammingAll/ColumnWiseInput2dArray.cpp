#include<iostream>
using namespace std;

int main(){
    int arr[2][2];
    int row_size=2,col_size=2;

    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            int number;
            cout<<"Data for ( "<<j<<","<<i<<") :"<<endl;
            cin>>number;
            arr[j][i]=number;
        }
    }

    for(int i=0; i<row_size; i++){
        for(int j=0; j<col_size; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}