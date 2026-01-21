#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> WavePrinting(int array[][10] , int row , int col){
    vector<int> WavePattern ;
    int j = 0 ;
    while(j < col){
        
        if(j % 2 == 0){
            int i = 0;
            while(i < row){
                WavePattern.push_back(array[i][j]);
                i++;
            }
        }
        else {
            int i = row - 1;
            while(i >= 0){
                WavePattern.push_back(array[i][j]);
                i--;
            }
        }
        j++;
    }
    return WavePattern;
}

void PrintWavePattern(int array[][10] , int row , int col){
    vector<int> result = WavePrinting(array , row , col);
    for(int i = 0 ; i < result.size() ; i++){
        cout<<result[i]<<"  ";
    }
}
int main(){
    int myarray[10][10], row , col;
    cout<<"Enter number of rows "<<endl;
    cin>>row;
    cout<<"Enter the number of columns "<<endl;
    cin>>col;
    cout<<"Enter the 2d array elements " <<endl;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin>>myarray[i][j];
        }
    }

    cout<<"Printing Wave Pattern of given 2d array "<<endl;
    PrintWavePattern(myarray , row , col);

}