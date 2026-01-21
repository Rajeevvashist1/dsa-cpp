#include<iostream>
using namespace std;

void PrintSpiralArray(int array[][10] , int row , int col){
    int count = row * col;
    int startRow = 0;
    int startCol = 0;
    int endRow = row - 1;
    int endCol = col - 1;

     //while(count > 1){
        //Print Starting  row 
        for(int j = startRow ; j < endCol ; j++){
            cout<<array[startRow][j]<<"  ";
        }
        startRow++;


        //Print Ending Col 
        for(int i = startCol ; i < end ; i++){
            cout<<array[i][endCol]<<"  ";
        }
        
// }
}


int main(){
    int New2dArray[][10] = {{1,2,3,4,5} , {14,15,16,17,6} ,{13,20,19, 18,7} , {12,11,10,9,8}};
    PrintSpiralArray(New2dArray , 4, 5);
}