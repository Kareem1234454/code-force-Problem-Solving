//VanyaandFence.cpp

#include<iostream>
using namespace std;

int main(){

    int n , h , min = 0;

    cin>>n>>h;

    int a[n];

    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    
    for(int i = 0 ; i < n ; i++){
        if(a[i] > h){
            min += 2;
        }
        else{
            min++;
        }
    }

    cout<<min<<endl;

    return 0;
}