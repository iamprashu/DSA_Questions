#include<iostream>
using namespace std;

int main(){
    int number = 1234;
    while(number){
        int digit;
        digit=number%10;
        cout<<digit<<endl;;

        number = number / 10;
    }

    return 0;
}