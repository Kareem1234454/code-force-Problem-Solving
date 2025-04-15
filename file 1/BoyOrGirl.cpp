#include<iostream>
using namespace std;

int main(){

    string name;
    cin>>name;

    int x = name.length();
    bool flag = 1;
    int y = x;

    for(int i = 0 ; i < x ; i++){
        for(int j = 1 + i ; j < x ; j++){
            if(name[i] == name[j]){
                flag = 0 ; break;
            }
        }
        if (flag == 0){
            --y;
        }
        flag = 1;
    }

    if(y % 2 == 1){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }

    return 0;
}