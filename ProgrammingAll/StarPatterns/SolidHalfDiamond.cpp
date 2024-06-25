#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    cout<<endl;

    for(int row=0; row<(number*2-1); row++){

        if(row<((number*2-1)/2)+1){
            for(int col1=0; col1<=row; col1++){
                cout<<"* ";
            }
        }else{
            for(int col2=0; col2<(number*2-1-row); col2++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    return 0;
}