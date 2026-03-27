#include<iostream>
using namespace std;

void Print_Array(int array[] , int size){
    if(size == 0) return;
    cout<<array[0]<<" ";
    Print_Array(array + 1 , size - 1);
}

int main(){
    int array[] = {23,1,4,56,89,-1};
    cout<<"Printing array elements "<<endl;
    Print_Array(array , 6);
}