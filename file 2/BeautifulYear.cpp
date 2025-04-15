//BeautifulYear.cpp

#include<iostream>
using namespace std;

void Reminder(int arr[] , int x){

    for(int i = 0 ; i < 4 ; i++){
        arr[i] = x % 10 ;
        x = x / 10 ;
    }

}

bool Check(int arr[]){

    for(int j = 0 ; j < 3 ; j++){
        for(int i = 1 + j ; i < 4 ; i++){

            if(arr[j] == arr[i]){
                return false;
            }

        }
    }

    return true;

}

int main(){

    int year , NextYear , arr[4] ;
    cin>>year;
    NextYear = 1 + year;


    for(int j = 0 ; j < 101 ; j++){

        Reminder(arr,NextYear);

        if(Check(arr)){

            cout<<NextYear<<endl;
            break;

        }
        else{

            NextYear++;

        }
   
    }

    return 0;
}