#include<iostream>
using namespace std;

int main(){

    long long int n , m , a;
    cin>>n>>m>>a;
    long long int NA = n/a;
    long long int MA = m/a;
    if( n%a > 0)
    NA++;
    if( m%a > 0)
    MA++;
    cout<<NA*MA;


}