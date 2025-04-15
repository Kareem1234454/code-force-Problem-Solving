#include<iostream>
using namespace std;


int main(){

    int x = 0;
    int n;
    cin>>n;
    string operation[n];

    for(int i=0;i<n;i++){
        cin>>operation[i];
    }

    for(int i=0;i<n;i++){
        
        if(operation[i] == "X++"){
            ++x;
        }
        else if(operation[i] == "++X"){
            ++x;
        }
        else if(operation[i] == "--X" || operation[i] == "X--"){
            --x;
        }
    }

    cout<<x<<endl;
    return 0;

}