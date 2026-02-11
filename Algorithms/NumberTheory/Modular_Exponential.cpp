#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int mod=pow(10,9)+7;

    int fact = 1;
    for(int i = 1 ; i <= n; i++){
        fact *= i;
        fact = fact % mod;
    }
    cout<<fact;
}