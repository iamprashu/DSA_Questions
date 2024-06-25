#include<iostream>
using namespace std;

void GetCount(int arr[],int size){
    int zero=0,one=0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0){
            zero++;
        }else if (arr[i]==1)
        {
           one++;
        }
        
    }

    cout<<"Total Number of Zero = "<<zero<<endl;

    cout<<"Total Number of One = "<<one<<endl;
    
}

int main(){
    int arr[]={1,2,1,0,4,1,0,1,0,0,0,1,11,1,2,1};
    int size = 16;

    GetCount(arr,size);

    return 0;
}