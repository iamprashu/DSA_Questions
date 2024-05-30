#include<iostream>
using namespace std;


int main(){
    int number;
    cout<<"Enter Hight :>";
    cin>>number;

    for(int row=0; row<number; row++){

        for(int col=0; col<number-row; col++){
            if(row==0||row==number-1||col==0||col==number-row-1)
                cout<<"* ";
            else
                cout<<"  ";
        }

        cout<<endl;
    }
}