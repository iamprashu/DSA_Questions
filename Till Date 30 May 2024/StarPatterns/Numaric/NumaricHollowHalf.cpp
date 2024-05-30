#include<iostream>
using namespace std;

int main(){
    int hight;
    cin>>hight;

    for(int row=1; row<=hight; row++){

        for(int col=1; col<=row; col++){

                if(row==1 || col == 1 || col==row || row==hight)
                    cout<<col<<" ";
                else
                    cout<<"  ";
        }

        cout<<endl;
    }
}