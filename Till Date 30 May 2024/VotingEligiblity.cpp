#include<iostream>
using namespace std;


void VotingEleg(int age){
    if(age>=18){
        cout<<"Yess You can Vote"<<endl;
    }else{
        cout<<"You Can't Vote"<<endl;
    }

}
int main(){
    int age;
    cout<<"Please Enter Your age :>";
    cin>>age;
    VotingEleg(age);
    return 0;
}