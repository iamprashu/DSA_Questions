#include<iostream>
using namespace std;

float SimpleIntrest(int p,int r, int t){
    float simple_intrest = (p*r*t)/100.0;

    return simple_intrest;
}

int main(){
    int p,r,t;
    cout<<"Please Enter P R T :> ";
    cin>>p>>r>>t;
    cout<<"Simple Intrest is :>"<<SimpleIntrest(p,r,t);

    return 0;
}