#include<iostream>
using namespace std;

// int update(int n){
//     return n++; // this can't increase in main function fns because its value is deleted after function
// }

//so we use refrence variable concept for don't send copy to another function

void update(int& n){
    n++;
}
int main(){
    int n = 9;

    cout<<"Before function calling : "<<n<<endl;
    update(n);
    cout<<"After function calling : "<<n<<endl; 
}
