//GeorgeandAccommodation.cpp

#include<iostream>
using namespace std;

int main(){

    int n , counter = 0;
    cin>>n;
    int p[n] , q[n] ;

    for(int i = 0 ; i < n ; i++){
        cin>>p[i]>>q[i];
    }

    for(int i = 0 ; i < n ; i++){
        if(p[i] + 2 <= q[i]){
            counter++;
        }
    }

    cout<<counter<<endl;

    return 0;
}