#include<iostream>
using namespace std;

void Print_Count(int n){
    if(n == 0) return;
    cout<<n<<"  ";
    Print_Count(n - 1);
}

int main(){
    int n;
    cin>>n;

    Print_Count(n);
}