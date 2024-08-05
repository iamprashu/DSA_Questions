#include<iostream>
using namespace std;

double sqrt(int number){
    //Getting a space to get answer in that space
    //like from -number to +number
    int start = number * (-1);
    int end = number;
    int nearest_root=0;

    while(start<=end){
        int mid = start+(end-start)/2;
        //created mid
        //as of now mid is the element which i am guessing that it can be the nearest root
        int guess = mid*mid;

        if(guess>number){
            end = mid-1;
        }

        else if(guess <= number){
            //agar guess less horta hai may be this is answer so i am using 
            //store and compute
            //storing
            nearest_root = mid;

            start = mid + 1;
        }
    }

    // return nearest_root;

    //here the answer is stored in the variable now we need to get precession

    int precession;
    cout<<"Please Enter precession upto :> ";
    cin>>precession;

    int loop_end = precession*10;
    double start=0.0,end=loop_end;

    while(start<=end){
        double mid = start +(end-start)/2;

        if(mid==number){
            return mid;
        }
        
    }

    
}

int main(){
    int number;
    cout<<"Please Enter The Number to get it's Sqrt :> "<<endl;
    cin>>number;

    double Root = sqrt(number);

    cout<<"the Squre root is :> "<<Root<<endl;

    return 0;

}