#include<iostream>
using namespace std;

bool is_Sorted(int array[] , int size){
    if(size == 0 || size == 1) return 1;
    if(array[0] > array[1]) return false;
    else{
        bool remaining = is_Sorted(array + 1, size - 1);
        return remaining;
    }
}

int main(){
    int array[] = {1,2,3,4,5,89,7};
    bool res = is_Sorted(array , 7);
    if(res) cout<< "array is sorted "<<endl;
    else cout<<"array is not sorted";
}