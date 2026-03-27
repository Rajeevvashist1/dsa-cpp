#include<iostream>
// #include<string>
using namespace std;

string Reverse_String(string s){
    int i = 0 , j = s.size() - 1;
    while(i <= j){
        char temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        i++;
        j--;
    }
    return s;
}

int main(){
    string s = "Rajeev";
    string s2 = Reverse_String(s);
    cout<<s2;
}