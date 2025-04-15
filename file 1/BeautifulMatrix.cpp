#include<iostream>
using namespace std;

int main(){

    int arr[5][5] , x , min=0;
    for(int i = 0; i<5 ; i++){
        for(int j = 0; j<5 ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<5 ; i++){
        for(int j = 0; j<5 ; j++){
            if(arr[i][j] == 1){
                if( j == 0 )
                    min +=2;
                else if( j == 1)
                    min +=1;
                else if( j == 2)
                    min += 0;
                else if( j == 3)
                    min += 1;
                else if( j == 4)
                    min += 2;
                if( i == 0 )
                    min +=2;
                else if( i == 1)
                    min +=1;
                else if( i == 2)
                    min += 0;
                else if( i == 3)
                    min += 1;
                else if( i == 4)
                    min += 2;
            }
        }
    }
    
    cout<<min<<endl;
    return 0;
}


