//LINEAR SEARCH

#include<iostream>
using namespace std;

int search(int number[] , int num , int size){
    for(int i = 0 ; i < size; i++){
            if(num == number[i]){
                return 1;
            }
    }
    return 0;
}
int main() 
{
    int n , num[50] , size;
    cout<<"enter the size of your list :"<<endl;
    cin>>size;

    cout<<"enter the elements  of your list :"<<endl;
    for(int i = 0 ; i < size; i++){
        cin>>num[i];
    }

    cout<<"enter the number to find in  your list :"<<endl;
    cin>>n;

    int x = search(num , n , size);
    if(x) cout<<"yes! the number you are trying to find out  is present ."<<endl;
    
    else cout<<" the number you are trying to find out  is not present ."<<endl;
    
        return 0;
}