#include<iostream>
using namespace std;

int main(){
    int number; cin>>number;

    for(int i=1; i<=number*2-1; i++){
        //half part
        if(i<=number){
            for(int one=1; one<=number; one++){
                if(one<=i){
                    cout<<"* ";
                }else{
                    cout<<" ";
                }
            }
        }else{
            //remaining part
            for(int two=1; two<=(number*2)-i; two++){
                cout<<"* ";
            }
        }
        

        cout<<endl;
    }

    return 0;
}