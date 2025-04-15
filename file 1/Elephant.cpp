#include<iostream>
using namespace std;

int main(){
    int x , y ;
    double z;
    cin>>x;
    
    if(x <= 5){
        y = 1;
    }
    else{
        if(x % 5 == 0){
            y = x / 5 ;
        }
        else{
            y = int(x/5) + 1;
        }
    }

    cout<<y<<endl;
    return 0;
}