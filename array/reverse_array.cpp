//REVERSE OF ARRAY   :->

// #include<iostream>
// using namespace std;

// void Reverse(int num[] , int size){
//     int temp[50];
//     for(int i = 0 ; i <= size; i++){
//        temp[i] = num[size - i - 1];
//     }

//     for(int i = 0 ; i < size; i++){
//          cout<<temp[i]<<" " ;
//     }
// }
// int main() 
// {
//     int num[50] , size ;
//     cout<<"enter the size of the array :"<<endl;
//     cin>>size;
//     cout<<"enter the element of your list:"<<endl;
//     for(int i = 0 ; i < size; i++){
//          cin>>num[i] ;
//     }
//     Reverse(num , size);
//     return 0;
// }


//  ALTERNATE REVERSE :

// #include<iostream>
// using namespace std;

// void swapalt(int num[] , int size){
//     int temp[50];
//     //even
//     if(size&1 == 0){
//     for(int i = 0; i < size; i += 2){
//         temp[i] = num[i];
//         num[i] = num[i + 1];
//         num[i+1] = temp[i];
//     }
// }
// else {
//     for(int i = 0; i < size - 1; i += 2){
//         temp[i] = num[i];
//         num[i] = num[i + 1];
//         num[i+1] = temp[i];
//     }
// }
// for(int i = 0; i < size ;i++ ){
//         cout<<num[i]<<" ";
//     }
// }
// int main() 
// {
//     int num[50] , size;
//     cout<<"enter size:"<<endl;
//     cin>>size;
//     cout<<"enter elements :"<<endl;
//     for(int i = 0 ; i<size; i++){
//         cin>>num[i];
//     }
//     swapalt(num , size);
//     return 0;
// }