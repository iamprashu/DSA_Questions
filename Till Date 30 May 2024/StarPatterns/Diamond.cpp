#include<iostream>
using namespace std;

int main(){
    int number;cin>>number;

    for(int i=1; i<=number*2-1; i++){
        if(i<=number){
            for(int j=1; j<=number; j++){
                if(j<=number-i){
                    cout<<" ";
                }else{
                    cout<<"* ";
                }
            }
        }else{
            for(int k=1; k<=number; k++){
                if(k<=i-number){
                    cout<<" ";
                }else{
                    cout<<"* ";
                }
            }
        }

        cout<<endl;
    }

    return 0;
}