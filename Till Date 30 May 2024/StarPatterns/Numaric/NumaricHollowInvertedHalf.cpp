#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;

    for(int row=1; row<=number; row++){

        for(int col=row; col<=number; col++){
            //condition for hollow
            if(row==1||row==number||col==row||col==number)
                cout<<col<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}