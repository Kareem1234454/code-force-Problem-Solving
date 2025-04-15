#include<iostream>
using namespace std;

int main(){

    int n , sum = 0 , prob = 0;
    cin>>n;
    int arr[n][3];

    for(int i=0; i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            sum +=arr[i][j];
        }
        if(sum>1){
            prob ++;
        }
        sum = 0;
    }
    cout<<prob;

}