#include<iostream>
using namespace std;

int Counter(int number){
    int bit=0, set_bit_count=0;

    while(number>0){
        bit = number%2;
        if(bit==1){
            set_bit_count++;
        }
        number /= 2;
    }

    return set_bit_count;
}

int main(){
    int number;
    cin>>number;

    int answer = Counter(number);

    cout<<answer<<endl;
}