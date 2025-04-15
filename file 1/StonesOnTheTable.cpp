#include<iostream>
using namespace std;

int main(){

    int x , y , counter = 0;
    string M;
    cin>>x;
    cin>>M;

    for(int i = 0 ; i < M.length() ; i++){

        if(M[i] == M[i+1])
            counter++;
    
    }

    cout<<counter<<endl;
    return 0;
}