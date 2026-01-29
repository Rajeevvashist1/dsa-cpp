#include<iostream>
#include<vector>
using namespace std;

vector<int> SpiralArray(vector<vector<int>>& matrix){
        vector<int>result;
        int count = matrix.size()* matrix[0].size();
        int startrow = 0;
        int startcol = 0;
        int endrow = matrix.size() - 1;
        int endcol = matrix[0].size() - 1;

        while(count > 0){
            //printing first row 
            for(int i = startcol ; i <= endcol && startrow <= endrow && startcol <= endcol; i++){
                result.push_back(matrix[startrow][i]);
                count--;
            }
            startrow++;

            //printing last col
            for(int i = startrow ; i <= endrow && startrow <= endrow && startcol <= endcol; i++){
                result.push_back(matrix[i][endcol]);
                count--;
            }
            endcol--;

            //printing last row 
            for(int i = endcol ; i >= startcol && startrow <= endrow && startcol <= endcol; i--){
                result.push_back(matrix[endrow][i]);
                count--;
            }
            endrow--;

            //printing first col
            for(int i = endrow ; i >= startrow && startrow <= endrow && startcol <= endcol; i--){
                result.push_back(matrix[i][startcol]);
                count--;
            }
            startcol++;
        }
        return result;
}


int main(){
    vector<vector<int>> matrix = {{1,2,3,4} , {5,6,7,8} ,{9,10,11,12}};
    vector<int>Spiralarray = SpiralArray(matrix);

    for(int i = 0 ; i < Spiralarray.size() ; i++){
        cout<<Spiralarray[i]<<"  ";
    }
}