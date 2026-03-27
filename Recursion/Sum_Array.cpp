#include<iostream>
using namespace std;

int Sum_Array(int array[] , int size){
    if(size == 0) return 0;
    return array[0] + Sum_Array(array + 1 , size -1);
}

int main(){
    int array[] = { 25,5,5,5,5};
    int sum = Sum_Array(array , 5);
    cout<<"Sum is :-> "<<sum<<endl;
}