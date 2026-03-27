#include<iostream>
using namespace std;

int Fibbonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    int ans  = Fibbonacci(n - 1) + Fibbonacci(n - 2);
    return ans;
}
int main(){
    int n;
    cin>>n;
   int res =  Fibbonacci(n);
   cout<<res;
}