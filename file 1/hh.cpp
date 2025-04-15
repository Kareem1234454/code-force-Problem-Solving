#include<iostream>
#include<string>
using namespace std;

int main(){

    int n = 0;
    cin>>n;
    string name[n];

    for(int i=0; i<n; i++){
        cin>>name[i];
    }

    for(int i=0;i<n;i++){
        if(name[i].length() <= 10){
            cout<<name[i]<<endl;
        }
        else{
            cout<<name[i][0]<<name[i].length() - 2<<name[i][name[i].length()-1]<<endl;
        }
    }



}