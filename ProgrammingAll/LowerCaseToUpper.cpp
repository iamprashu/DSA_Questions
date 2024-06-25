#include<iostream>
using namespace std;

int main(){
    char n;
    cout<<"Enter Lower Case Character :> ";
    cin>>n;

    char upper = n - 'a' + 'A';

    cout<<"Upper Case is "<<upper<<endl;

    return 0;

}