// convert binary to decimal

#include <iostream>
#include <cmath>
using namespace std;

int BinaryGet(int n){

  int binary=0;
  int i=0;

  while(n>0){
    int bit= n % 2;
    binary = bit*pow(10,i++)+binary;
    n = n / 2;
  }

  return binary;

}

// function prototype
int main(){
  int number;
  cin>>number;

  cout<<BinaryGet(number);


  return 0;
}