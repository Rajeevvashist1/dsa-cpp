#include<iostream>
using namespace std;

void longestRowSum(int array[][4] , int row , int col){
    int ans = 0;
    int idx = 0;
    for(int i = 0 ; i < 3 ; i ++){
        int mediumres = 0;
        for(int j = 0 ; j < 4 ; j++){
            mediumres += array[i][j] ;
        }
        if(mediumres > ans){
            ans = mediumres;
            idx = i;
        }
    }
    cout<<"The longest sum is of "<<idx + 1<<"th Row and sum is "<<ans<<endl;
    
}

void longestcolSum(int array[][4] , int row , int col){
    int ans = 0 , idx = 0;
    for(int j = 0 ; j < 4 ; j++){
        int mediumres = 0;
        for(int i = 0 ; i < 3 ; i++){
            mediumres += array[i][j];
        }
        if(mediumres > ans){
            ans = mediumres;
            idx = j;
        }
    }
    cout<<"The longest sum is of "<<idx + 1<<"th coloumn and sum is "<<ans<<endl;
}


int main(){
     int myarray[3][4] = {{1,3,5,6} , {2,4,7,9} , {4,9,13,7}} ;
     longestRowSum(myarray , 2 , 4);
     longestcolSum(myarray , 2 , 4);
}