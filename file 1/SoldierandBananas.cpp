//SoldierandBananas.cpp
#include<iostream>
using namespace std;

int main(){
    int k , w , n , dollars , borrow;
    cin>>k>>n>>w;

    dollars = k;

    for(int i = 2 ; i <= w ; i++){
        dollars += i * k;
    }

    if(dollars > n){
        borrow = dollars - n ;
        cout<<borrow<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}