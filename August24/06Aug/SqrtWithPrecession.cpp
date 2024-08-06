#include<iostream>
using namespace std;

int sqrt(int number){
    //Getting a space to get answer in that space
    //like from -number to +number
    int start = 0;
    int end = number;
    int nearest_root=0;

    while(start<=end){
        int mid = start+(end-start)/2;
        cout<<"Start = "<<start<<" End = "<<end<<"Mid = "<<mid<<endl;
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
    return nearest_root;
}

double Prec(int number){
    double sqr = sqrt(number);

    int precision=0;
    cout<<"How much precision you want (1,2,3...) :> ";
    cin>>precision;
    double steps = 0.1;

    while(precision--){
        double guess = sqr;

        while (guess*guess <= number)
        {
            sqr = guess;
            guess += steps;
        }
        steps /= 10;
    }

    return sqr;
}

int main(){
    int number;
    cout<<"Please Enter The Number to get it's Sqrt :> "<<endl;
    cin>>number;

    double Root = Prec(number);

    // cout<<"the Squre root is :> "<<Root<<endl;

    printf("The root of %d is :> %.15f \n",number,Root);

    return 0;

}