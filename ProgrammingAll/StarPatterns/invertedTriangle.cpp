#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    for(int i=1; i<=size; i++){
        //blank
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }

        //star
        for(int k=1; k<=size-i+1; k++){
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
   
}