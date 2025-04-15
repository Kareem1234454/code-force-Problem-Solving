#include<iostream>
using namespace std;

int main(){

    int n ;
    cin>>n;
    int a[n] , b[n] , x [n-2];

    for(int i = 0 ; i < n ; i++){
        cin>>a[i]>>b[i];
    }

    for(int i = 0 ; i < n-1 ; i++){
        if(i == 0)
            x[i] = b[i] ;
        else
            x[i] = x[i-1] - a[i] + b[i];
    }

    
    int max;
    for(int i = 0 ; i < n-2 ; i++){
        for(int j = 1 ; j < n-1 ; j++){
            if(x[i] < x[j]){
                max = x[j];
                x[j] = x[i];
                x[i] = max;                
            }
        }
    }

    cout<<x[0]<<endl;

    return 0;
}