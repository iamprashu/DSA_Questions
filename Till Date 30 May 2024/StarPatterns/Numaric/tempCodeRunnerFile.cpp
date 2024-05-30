#include<iostream>
using namespace std;

// int main(){
//     int number;
//     cin>>number;
//     int round=number;

//     for(int row=0; row<number; row++){
//         int printer=1;

//         for(int col=0; col<round; col++ ){
//             //for space
//             if(col<number-1-row){
//                 cout<<"  ";
//             //after space

//             }else if(col<number){
//                     cout<<printer<<" ";
//                     printer++;

//             }else if(col==number){
//                     printer = printer-2;
//                     cout<<printer<<" ";
//                     printer--;
//             }else{
//                 cout<<printer<<" ";
//                 printer--;
//             }
                    
            
//         }
//         round++;

        
//      cout<<endl;
//     }
// }


int main(){
    int number;
    cin>>number;

    for(int row=1; row<=number; row++){
        int data=1;

        for(int col=1; col<=number+row-1; col++){
            
            if(col<=number-row)
                cout<<"  ";

            else if(col<=number){
                cout<<data<<" ";
                data++;

            }else if (col>number)
            {
                data=data-2;
                cout<<data<<" ";
                data++;
            }
            
                
        }

        cout<<endl;
    }
}