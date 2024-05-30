#include<iostream>
using namespace std;

void PrintCounting(int n){
    int i=1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}

int main(){
    int number;
    cout<<"Please Enter Number :> ";
    cin>>number;

    PrintCounting(number);

    return 0;

}

