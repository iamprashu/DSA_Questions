#include<iostream>
using namespace std;

int Reverse(int number){
    int answer=0;
    while(number !=0){
        int temp=0;
        temp = number % 10;
        answer = answer * 10 + temp;
        number = number / 10;
    }

    return answer;
}

int main(){
    int number;
    cout<<"Enter Number :> ";
    cin>>number;

    int answer = Reverse(number);

    number = answer;

    cout<<number;

    return 0;
}
