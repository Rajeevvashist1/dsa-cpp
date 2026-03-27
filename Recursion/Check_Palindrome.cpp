#include<iostream>
#include<string>
using namespace std;

string Reverse_String(string s , int f , int l){
    int i = f , j = l;
    if(i > j) return s;
        char temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        return Reverse_String(s , f + 1 , l - 1);
        
}

int main(){
    string s = "abba";
    string s2 = Reverse_String(s , 0 , s.size() - 1); 
    if(s == s2) cout<<"Yes!! Palindrome "<<endl;
    else  cout<<"No! , not  a Palindrome "<<endl;
}