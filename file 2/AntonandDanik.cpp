//AntonandDanik.cpp
#include<iostream>
using namespace std;

int main(){

    int n , A = 0 , D = 0;
    string s;
    cin>>n;
    cin>>s;

    for(int i = 0 ; i < s.length() ; i++){

        (s[i] == 'A') ? A++ : D++ ;

    }

    if(A > D)
        cout<<"Anton"<<endl;
    else if(D > A)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}