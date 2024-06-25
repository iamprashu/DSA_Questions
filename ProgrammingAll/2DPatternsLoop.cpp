#include<iostream>
using namespace std;

void PrintArray(int arr[][5], int row_size, int col_size){

    for(int row=0; row<row_size; row++){

        for(int col=0; col<col_size; col++){

            cout<<arr[row][col]<<" ";
        }

        cout<<endl;
    }
}

void PrintArray2(int arr[][5], int row_size, int col_size){
    cout<<"Inner loop will run next by row"<<endl<<endl;

    for(int row=0; row<row_size; row++){

        for(int col=row; col<col_size; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}

void PrintArray3(int arr[][5], int row_size, int col_size){
    cout<<"Inner loop will run next by row"<<endl<<endl;

    for(int row=0; row<row_size; row++){

        for(int col=0; col<=row; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}

void PrintArray4(int arr[][5], int row_size, int col_size){
    cout<<"Inner loop will run next by row"<<endl<<endl;

    for(int row=0; row<row_size; row++){

        for(int col=col_size-1; col>=0; col--){
            
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}

void PrintArray5(int arr[][5], int row_size, int col_size){
    cout<<"Inner loop will run next by row"<<endl<<endl;

    for(int row=0; row<row_size; row++){

        for(int col=col_size-1; col>row; col--){
            
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}

void PrintArray6(int arr[][5], int row_size, int col_size){
    cout<<"Inner loop will run next by row"<<endl<<endl;

    for(int row=0; row<row_size; row++){

        for(int col=row+1; col<col_size; col++){
            
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}

void PrintArray7(int arr[][5], int row_size, int col_size){
    cout<<"Inner loop will run next by row"<<endl<<endl;

    for(int row=0; row<row_size; row++){

        for(int col=0; col<col_size; col++){
            
            cout<<arr[col][row]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][5]={
        {1,2,3,4,5},
        {11,12,13,14,15},
        {21,22,23,24,25}
    };

    int row_size=3;
    int col_size=5;

    // for (int row=0; row<row_size; row++){

    //     cout<<"Enter Values for Row "<<row<<endl;

    //     for(int col=0; col<col_size; col++){
    //             int number;
    //             cin>>number;
    //             arr[row][col]=number;
    //     }
    // }

    cout<<endl<<"Array Stored Successfully"<<endl;

    for(int row=0; row<row_size; row++){

        for(int col=0;col<col_size; col++){

            cout<<arr[row][col]<<" ";

        }
        cout<<endl;

    }

    // 1 // PrintArray(arr,row_size,col_size);

    //PrintArray2(arr,row_size,col_size);

    // PrintArray3(arr,row_size,col_size);

    // PrintArray4(arr,row_size,col_size);

    // PrintArray5(arr,row_size,col_size);

    // PrintArray6(arr,row_size,col_size);
    
    //to use this set square array PrintArray7(arr,row_size,col_size);


    return 0;
    
}