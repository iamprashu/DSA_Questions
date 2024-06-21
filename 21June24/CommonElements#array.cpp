#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int>commonElements(int A[], int B[], int C[], int n1, int n2, int n3){
    // First i am initilizing 3 pointers to triverse 3 arrays

    int i=0, j=0, k=0;

    // if all the pointers standing on same elements than i will store that pointer as a key in map to get uniqu element
    unordered_map <int,int>table;

    vector<int>answer; //vector to save elements and return them

    while(i<n1 && j<n2 && k<n3){

        if(A[i]==B[j] && B[j] == C[k]){

            int CommonElement = A[i];

            if(table[CommonElement] == 0)
            {
                answer.push_back(CommonElement);
            }
            // but i need to increment the value of the key common element so it won't get pushed again
            table[CommonElement] = table[CommonElement] + 1;

            i++;
            j++;
            k++;

        }

        // if elements not match so i will move the pointers by checking between all arrays as it is a Increasing array

        else if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<C[k]){
            j++;
        }

        else{
            k++;
        }

    }

    return answer;
}


int main(){
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};

     int n1 = 6; int n2 = 5; int n3 = 8;

    // int A[] = {1,2,3};
    // int B[] = {1,2,3};
    // int C[] = {1,2,3};

    //  int n1 = 3; int n2 = 3; int n3 = 3;

    vector<int> answer = commonElements(A,B,C,n1,n2,n3);

    for(int i=0; i<answer.size(); i++){
        cout<<answer[i]<<endl;
    }
    

    return 0;

}