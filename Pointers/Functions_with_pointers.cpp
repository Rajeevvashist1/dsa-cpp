#include<iostream>
using namespace std;

// void pointerfn(int *pg){
//     cout<<"pg -> "<<pg<<endl;
//     cout<<"*pg -> "<<*pg<<endl;
//     cout<<"&pg -> "<<&pg<<endl;
//     pg++;
//     cout<<"pg -> "<<pg<<endl;
//     cout<<"*pg -> "<<*pg<<endl;

//     *pg += 1;
//     cout<<"pg -> "<<pg<<endl;
//     cout<<"*pg -> "<<*pg<<endl;
// }

void arrayfn(int array[] , int n){
    // cout<<array<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<i[array]<<endl;
        // cout<<*(array + i)<<endl;
    }

    //HENCE PROVE THAT ARRAY NAME IS POINTER WHICH STORE THE ADDRESS OF 0TH INDEX ELEMENT **********************
    
}
int main(){

    // int num = 8;
    // int *ptr = &num;
    // cout<<"nums adress == "<<ptr<<endl;

    // pointerfn(ptr);

    int array[5] = {1,2,3,4,5};
    // cout<<array<<endl;

    int *ptr = &array[0];
    // cout<<ptr<<endl<<*ptr<<endl;
    arrayfn(ptr , 5);


}