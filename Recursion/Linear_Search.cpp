#include<iostream>
using namespace std;

bool Linear_Search(int array[] , int size, int key){
    if(array[0] == key) return true;
    if(size == 0) return false;
    else {
        bool is_in_remaining_part = Linear_Search(array + 1 , size - 1, key);
        return is_in_remaining_part;
    }
}
int main(){
    int array[] = {3,5,1,2,6};
    bool res = Linear_Search(array , 5 , 1);
    if(res) cout<<"Yes!! key is Present "<<endl;
    else cout<<"No key is not there ";
}