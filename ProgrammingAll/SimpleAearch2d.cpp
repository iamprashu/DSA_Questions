#include<iostream>
using namespace std;
bool LinearSearch(int arr[][3],int row_size,int col_size,int query){
    for(int row=0; row<row_size; row++){

        for(int col=0; col<col_size; col++){
            int current_element=arr[row][col];
            
            if(current_element==query){
                return true;
            }
        }
    }

    return false;
    
}
int main(){
    int arr[5][3]={1,2,3,4,5,-6,-7,-8,-9,10,11,-12,13,-222,16};
    int col_size=3;
    int row_size=5;
    int query;
    cout<<"Enter Element :> ";
    cin>>query;

   bool answer =  LinearSearch(arr,row_size,col_size,query);

   if(answer){
    cout<<"Yess."<<endl;
   }else{
    cout<<"No."<<endl;
   }

   for ( int i = 0; i<row_size; i++)
   {
        for (int j = 0; j < col_size; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
   }
    return 0;
}   
