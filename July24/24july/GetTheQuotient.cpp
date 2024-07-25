#include<iostream>
using namespace std;

int GetQuotient(int Divident, int Divisor){
    /* i am using approach for creating my own search space as a 
   quotient is always between -(divident) to +(divident) */

   int start = Divident * -1;
   int end = Divident;
   int Quotient = 0; //i am using store and compute if the mid is less then quotoent


   while(start<=end){
    int mid = start + (end - start)>>1;
    //getting current element by producting mid and divisor
    // As Divident = Quotient * Divisor + Reminder (Excluding reminder as i use INT);
        int Test_Quotient  = mid * Divisor;

        //Happy Condition
        if(Test_Quotient == Divident){
            return mid;
        }

        

        if(Test_Quotient < Divident){
            Quotient = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
   }

   return Quotient;

}

int main(){
    int Divident;
    int Divisor;
    cout<<"Please Enter the Divident :>";
    cin>>Divident;
    cout<<"Please Enter The Divisor :> ";
    cin>>Divisor;

    int Quotient = GetQuotient(Divident,Divisor);

    cout<<"The Quotient is :> "<<Quotient<<endl;

    return 0;
}