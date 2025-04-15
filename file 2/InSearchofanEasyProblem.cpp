//InSearchofanEasyProblem.cpp

#include<iostream>
using namespace std;

int main(){

    int n , x = 0 ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 1){
            x++;
        }
    }

    if(x >= 1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

        return 0;
}