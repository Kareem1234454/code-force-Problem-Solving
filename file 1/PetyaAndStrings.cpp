#include<iostream>
using namespace std;

int main(){
    string name1 , name2 , name3 = "" , name4 = "";

    int x = 0;

    cin>>name1;
    cin>>name2;

    for(int i = 0 ; i < name1.length() ; i++){
        name3 += toupper(name1[i]);
    }

    for(int i = 0 ; i < name2.length() ; i++){
        name4 += toupper(name2[i]);
    }


    for(int i = 0 ; i < name2.length() ; i++){

        if(int(name3[i]) < int(name4[i])){
            --x;
            break;
        }
        else if(int(name3[i]) > int(name4[i])){
            ++x;
            break;
        }

    }

    (x == 0)? cout<<0<<endl : (x > 0)? cout<<1<<endl : cout<<-1<<endl;

    return 0;
}