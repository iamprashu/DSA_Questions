#include<iostream>
using namespace std;

bool Linear2D(int arr[][3],int row_size, int col_size,int element){

    for(int row=0; row<row_size; row++){

        for(int col=0; col<col_size; col++){

            int current_element=arr[row][col];

            if(current_element==element)
                return true;
            
        }

    }

    return false;

    
}

int main(){
    int arr[5][3]={
        {1,2,3},
        {44,2,4},
        {12,45,44},
        {121,444,2},
        {12,56,70}
    };
    int element=12;

    int row_size=5;int col_size=3;

    bool answer = Linear2D(arr,row_size,col_size,element);

    if(answer){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }

    return 0;
}