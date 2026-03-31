#include<iostream>
#include<vector>
using namespace std;

int main(){
    int array1[4] = {1,2,5,6};
    int array2[5] = {3,4,7,8,9};

    vector<int> new_Array;
    int index1 = 0 , index2 = 0;
    while(index1 < 4 && index2 < 5){
        if(array1[index1] < array2[index2]){
            new_Array.push_back(array1[index1]);
            index1++;
        }
        else {
            new_Array.push_back(array2[index2]);
            index2++;
        }
    }
    if(index1 < 3) for(int i = index1; i < 4; i++) new_Array.push_back(array1[i]);
    if(index2 < 4) for(int i = index2; i < 5; i++) new_Array.push_back(array2[i]);
    
    for(int  i = 0; i < new_Array.size() - 1 ; i++) cout<<new_Array[i]<<" ";

}