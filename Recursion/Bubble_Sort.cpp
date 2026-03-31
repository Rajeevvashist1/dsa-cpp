#include<iostream>
#include<algorithm>

using namespace std;

void Bubble_Sort(int array[] , int size , int i , int j){
    //Base case 
    if(size == 0 || size == 1 || j >= size - i - 1) return;

    if(array[j] > array[j + 1]) {
        swap(array[j] , array[j + 1]);
        Bubble_Sort(array, size, i, j + 1);
    }
    else Bubble_Sort(array, size, i, j + 1);

    Bubble_Sort(array , size , i + 1 , j);
}

int main(){
    int array[] = {5,2,3,4,1,0};
    Bubble_Sort(array , 6 , 0 , 0);
    for(int i = 0 ; i < 6; i++) cout<<array[i]<<" ";
}