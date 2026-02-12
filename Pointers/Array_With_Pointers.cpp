#include<iostream>
using namespace std;

int main(){

    //Char Array

    int my_array[5] = {1,2,3,4,5};
    // cout<<my_array<<" this is the adrress of 1st (0)th index "<<endl;
    // cout<<*(my_array + 3)<<endl;
    // cout<<3[my_array]<<endl;


    //Char Array  ->> ***************  THE COUT AND SOME OTHER FUNCTIONS WORKS DIFFRENTLY FOR THE CHAR ARRAY THEY HOLD COMPLETE CONTENT IN NAME NOT THE ADREES OF 1ST INDEX LIKE IN INTEGER ARRAY *******************

    char newarray[5] = {'a','b','c','d','e'};

    // char* ptr = &newarray[0];
    // cout<<ptr;
    cout<<newarray<<endl;

    
}