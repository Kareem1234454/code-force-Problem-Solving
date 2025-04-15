//NearlyLuckyNumber.cpp
#include<iostream>
using namespace std;

int main(){
    string num;
    int x = 0;
    cin>>num;

    for(int i = 0 ; i < num.length() ; i++){
        if(num[i] == '4' || num[i] == '7'){
            x++;
        }
    }
    if(x == 4 || x == 7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}