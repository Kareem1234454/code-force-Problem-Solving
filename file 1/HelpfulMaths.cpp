#include<iostream>
using namespace std;

int main(){

    string sum = "";
    int x = 0 ;

    cin>>sum;

    for(int i = 0 ; i < sum.length() ; i += 2){
        for(int j = 2 + i ; j < sum.length() ; j += 2){
            if(sum[j] < sum[i] ){
                x = sum[j];
                sum[j] = sum[i];
                sum[i] = x;
            }

        }
    }

    cout<<sum<<endl;
    return 0;
}