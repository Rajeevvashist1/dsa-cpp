#include<iostream>
#include<String>
using namespace std;

void Say_Digit(int n , string array[]){
    if(n == 0) return;

    Say_Digit(n / 10 , array);

    int digit = n % 10;
    cout<<array[digit]<<" ";
    n = n / 10;

}

int main(){
    string array[10] = {"Zero" , "one" , "two" , "Three" , "Four" , "Five" , "Six" ,"Seven" , "Eight", "Nine"};

    int n ;
    cin>>n;
    Say_Digit(n , array);
}