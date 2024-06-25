#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;

    for(int i = 1; i<=number*2-1; i++){
        if(i<=number){

            for(int j=1; j<=number; j++){
                    if(j<=i-1){
                        cout<<" ";
                    }else{
                        cout<<"* ";
                    }   
            }    
        }else{
            for(int k=1; k<=number; k++){
                if(k<=(number*2-1)-i){
                    cout<<" ";
                }else{
                    cout<<"* ";
                }
            }
        }
        cout<<endl;
    }
}