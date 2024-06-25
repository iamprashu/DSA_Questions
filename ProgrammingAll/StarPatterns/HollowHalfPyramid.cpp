#include<iostream>
using namespace std;

int main(){
    int count;cin>>count;
    for (int i = 0; i < count; i++)
    {
       for (int j = 0; j < i+1; j++)
       {
            if(i==count-1||j==0||j==i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
       }

       cout<<endl;
       
    }

    
}