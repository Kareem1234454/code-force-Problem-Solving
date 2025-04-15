#include<iostream>
using namespace std;



int main(){

    long long n;
    cin>>n;

    long long fe = n/2;
    long long fo =(n+1)/2;

    long long sum_fe = fe*(fe+1);
    long long sum_fo = fo*fo;

    cout<<sum_fe - sum_fo<<endl;

    return 0;

}