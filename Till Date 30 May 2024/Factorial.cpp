#include<iostream>
using namespace std;

int Factorial(int number){
    int factorial=1;
    int num=number;

    for(int run=1; run<=num; run++){
        factorial = factorial * number;
        number--;
        
    }

    return factorial;

}

int main(){
    int number;
    cout<<"Please Enter Number to get Factorial :> ";
    cin>>number;

    cout<<Factorial(number);

    return 0;
}