//Translation.cpp
#include<iostream>
using namespace std;

int main(){

    string s , t ;
    int x = 1 , y = 0 , z;
    cin>>s;
    cin>>t;

    if(s.length() == t.length()){

    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = 0 ; i < s.length() ; i++){

        if(s[i] == t[s.length() - x]){

        }
        else{
            y++;
        }

        x++;
    }

    if(y == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}