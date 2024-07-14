#include<iostream>
using namespace std;

pair<int,int> GetPair(int arr[], int count){
    int number;
    cout<<"Enter sum";
    cin>>number;
    pair<int,int>answer;
    answer.first=-1;
    answer.second=-1;

    for (int i = 0; i < count; i++)
    {
       for (int j = 0; j < count; j++)
       {
        if(arr[i]+arr[j]==number){
            answer.first=arr[i];
            answer.second=arr[j];
            return answer;
        }
       }
    }

    return answer;
    


}


int main(){
    int arr[]={12,15,20,10,15,16,90};
    int size = 5;

    pair<int,int>Answer=GetPair(arr,size);  

    if(Answer.first>-1 && Answer.second > -1){

        cout<<"Found"<<Answer.first<<" "<<Answer.second;
        
    }else{

        cout<<"Not Found.";
    }
}