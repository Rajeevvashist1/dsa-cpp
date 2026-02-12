/*POINTERS in c++

Pointer is variable which store the adress of another variable

Declaration
int *ptr = &value   ptr will have the adress of value 
* --> this is called a drefrencing operators  means it will give the value stored at that adress which pointer is holding 

*p -> will have the value
p -> will have adress (&value) of that value

*/ 

#include<iostream>
using namespace std;

int main(){
    /* int num = 5;
    int *ptr = &num;
    cout<<" value of num:-> " <<num<<endl
    <<"Adrress of num : (&num) ->> " <<&num<<endl
    <<"Adrress of num : (p) :-> "<<ptr<<endl
    <<"Value of num (by derefrencing of pointer ptr (*ptr)):-> "<<*ptr<<endl;
    */


    //Size of pointer :->

    /*int value = 5;
    int *ptr = &value;
    
    cout<<"Size of value "<<sizeof(value)<<endl
    <<"Size of ptr "<<sizeof(ptr)<<endl
    <<"Size of *ptr "<<sizeof(*ptr)<<endl;;
    cout<<"ptr " <<ptr<<endl;

    // cout<<"test -> " <<sizeof(void*)<<endl;
    if(sizeof(*ptr == sizeof(value))) cout<<"true";
*/

    //Experimental Study

    // int num = 90;
    // int *ptr = &num;
    // int a = num;

    // cout<<"Before :"<<endl
    // <<"num:=> "<<num<<endl
    // <<"ptr -> "<<ptr<<endl
    // <<"*ptr ->"<<*ptr<<endl
    // <<"a-> "<<a<<endl; 

    // a++;
    // num++;
    // ptr++;
    // *ptr += 1;
    // cout<<"After :"<<endl
    // <<"num:=> "<<num<<endl
    // <<"ptr -> "<<ptr<<endl
    // <<"*ptr ->"<<*ptr<<endl
    // <<"a-> "<<a<<endl; 


    
}
