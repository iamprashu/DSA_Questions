#include<iostream>
using namespace std;

bool IsEven(int );


int main(){
    int number;
    cout<<"Number do :> ";
    cin>>number;

    if(IsEven(number)){
        cout<<number<<" is Even."<<endl;
    }else{
        cout<<number<<" is Odd."<<endl;
    }

    return 0;
}

bool IsEven(int number){
    if(number%2==0)
        return 1;
    else
        return 0;
}