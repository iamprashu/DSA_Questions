#include<iostream>
using namespace std;

int PrimeCheck(int number){

    if(number<=1){
            return 0;
        }
    for(int i=2; i<number; i++){
            if(number%i==0){
                return 0;
        } 
    }
    return 1;
}


int main(){
    int last_Digit;
    cout<<"Enter number Here :> ";
    cin>>last_Digit;

    for(int i=1; i<=last_Digit ;i++){
        if(PrimeCheck(i)){
            cout<<i<<endl;
        }
    }

    return 0;
}