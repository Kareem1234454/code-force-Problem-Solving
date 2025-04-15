#include<iostream>
using namespace std;

int main(){
    int numUpper = 0 , numLower = 0 ;
    string Word;

    cin>>Word;

    for(int i = 0 ; i < Word.length() ; i++){
        if(int(Word[i]) >= 65 && int(Word[i]) <= 90){
            numUpper++;
        }
        else{
            numLower++;
        }
    }

    if(numUpper > numLower){
        for(int i = 0 ; i < Word.length() ; i++){
            Word[i] = toupper(Word[i]);
        }
    }
    else{
        for(int i = 0 ; i < Word.length() ; i++){
            Word[i] = tolower(Word[i]);
        }        
    }

    cout<<Word<<endl;

    return 0;
}