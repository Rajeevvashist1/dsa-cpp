//  sum of element of array


#include<iostream>
using namespace std;

int ADD(int number[] , int size){
    int sum = 0 ;
    for(int i = 0; i < size; i++){
        sum  += number[i];

    }
    return sum;
}
int main() 
{
    int number[50] , size;
    cout<<"enter the size of your list :"<<endl;
    cin>>size;

    cout<<"enter element of your list : ";
    for(int i = 0; i < size; i++){
        cin>>number[i];
    }
    int ans = ADD(number , size);
    cout<<"the sum of all your element in list is :"<<ans;

    return 0;
}

