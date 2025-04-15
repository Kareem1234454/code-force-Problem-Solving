#include<iostream>
using namespace std;

int main(){

    int a , b , years , counter = 0;
    cin>>a>>b;

    while(a <= b){

        a = a * 3;
        b = b * 2;
        counter++;

    }

    cout<<counter<<endl;

    return 0;

}