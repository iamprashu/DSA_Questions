#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;

    for(int i=1; i<=number; i++){

        for(int j=1; j<=number; j++){
            if(i==1||j==1||i==number||j==number||j==i)
                cout<<"* ";
            else    
                cout<<"  ";
        }
        cout<<endl;
    }
}