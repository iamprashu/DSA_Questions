#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Please Enter The Hight of Triangle :> ";
    cin>>size;

    for(int i=1; i<=size; i++){
        // loop for space
       for(int space=1; space<=i; space++){
        cout<<"  ";
       }
       //loop for star
       for(int star=1; star<=size-i+1; star++){
        cout<<"* ";
       }

        cout<<endl;
    }

    return 0;
}