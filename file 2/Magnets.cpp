//Magnets.cpp

#include<iostream>
using namespace std;

int main(){

    int n , Group = 0;
    cin>>n;

    string M[n];
    for(int i = 0 ; i < n ; i++){
        cin>>M[i];
    }

    for(int i = 0 ; i < n ; i++){
        if(M[i] != M[i+1]){
            Group++;
        }
    }
    cout<<Group<<endl;

    return 0;
}