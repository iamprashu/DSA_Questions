#include<iostream>
using namespace std;


int main(){
    int arr[]={0,1,1,0,0,0,1,1,0,0};
    int size = 10;

    // getting i's compliment by checking element and flip them

    for(int i=0; i<size; i++){
        (arr[i] == 0) ? (arr[i]=1) : (arr[i]=0);
    }

    int carry = 1; /*Created a carry veriable that will initially store 1 and after iteration
                    store value as conditions*/


    for(int i=size-1; i>=0; i--){ /*Running loop from last element as sun always done from right side
                                    as 2 conditions*/

        int sum = arr[i] + carry; // Getting sum of carry and current element

        if(sum == 2){
            arr[i] = sum % 2;
            carry = 1;
        }
        else 
        {
            arr[i] += carry;
            carry = 0 ;     
        }
    }

    for(auto i:arr){
        cout<<i<<" ";
    }
    

    return 0;
} 