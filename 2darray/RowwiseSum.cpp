#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> rowwisesum(int array[][4] , int row , int col){
     vector<int> resultarray;

     //      SUM OF ROWS

    // for(int i = 0 ; i < row ; i++){
    //     int mediumres = 0;
    //     for(int j = 0 ; j <  col ; j++){
    //         mediumres += array[i][j];
    //     }
    //     // cout<<mediumres<<endl;
    //     resultarray.push_back(mediumres);

    // }


    //  SUM OF COLS

    for(int j = 0 ; j < 4 ; j++){
        int mediumres = 0;
        for(int i = 0 ; i < 3 ; i++){
            mediumres += array[i][j];
        }
        resultarray.push_back(mediumres);
    }
    return resultarray;
}
int main(){
    int myarray[3][4] = {{1,2,3,4} , {1,2,3,4} , {1,2,3,4}} ;
    vector<int> resultarray ;
    resultarray=  rowwisesum( myarray ,  3, 4);
    // for(int i = 0 ; i < 3 ; i++){
    //     cout<<"sum of "<<i + 1<<"th row is "<<resultarray[i]<<endl;
    // }
    for(int i = 0 ; i < 4 ; i++){
        cout<<"sum of "<<i + 1<<"th column is "<<resultarray[i]<<endl;
    }
}