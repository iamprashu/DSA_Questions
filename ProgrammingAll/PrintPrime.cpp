#include<iostream>
using namespace std;



bool PrimeCheck(int);

int main(){
    int number;
    cout<<"Enter Number :>";
    cin>>number;

    for(int i=2; i<=number; i++){
        bool Check = PrimeCheck(i);
        if(Check){
            cout<<i<<" ";
        }
    }

    return 0;
}


bool PrimeCheck(int num){
    
    for(int j=2; j<num; j++){
        if(num%j==0)
            return 0;
    }

    return 1;
}