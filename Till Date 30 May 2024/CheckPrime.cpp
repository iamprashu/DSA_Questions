#include<iostream>
using namespace std;

bool isPrime(int);

int main(){
    int number;
    cout<<"Enter Number :>";
    cin>>number;

    if(isPrime(number)){
        cout<<"Number is Prime .";
    }else{
        cout<<"Not Prime ";
    }

    return 0;
}


bool isPrime(int number){

    // if(number<=1)
    //     return 0;

    for(int i=2; i<number; i++){

        if(number%i==0){
            return 0;
        }else{
            return 1;
        }
    }
    return 0;
}