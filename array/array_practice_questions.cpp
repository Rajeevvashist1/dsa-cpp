// #include<iostream>
// #include<climits>
// using namespace std;

// int maxinarray(int arr[] , int  size){
//     int value = INT_MIN;
//     for(int i = 0; i < size ; i++){
//         if(arr[i] > value) value = arr[i];
//     }
//     return value;
// }
// int mininarray(int arr[] , int  size){
//     int value = INT_MAX;
//     for(int i = 0; i < size ; i++){
//         if(arr[i] < value) value = arr[i];
//     }
//     return value;
// }

// int main(){
//     int number[100] , size;

//     cout<<"enter the size of your array :"<<endl;
//     cin>>size;
//     cout<<"enter the elemnts of your array :"<<endl;
//     for(int i = 0 ; i <size ; i++){
//         cin>>number[i];
//     }

//     int maxvalue = maxinarray(number , size);
//     int minvalue = mininarray(number ,  size);


//     cout<<"the maximum value in aaray is "<<maxvalue<<endl;
//     cout<<"the minimum value in aaray is "<<minvalue;
// }



// REVERSE ARRAY 
// #include<iostream>
// using namespace std;

// int ReverseArray(int arr[] ,int size){
//     int i = 0;
//     while(i < size - i - 1){
//     swap(arr[i] , arr[size - i - 1]);
//     i++;
// }
// }
// int main() 
// {
//     int number[100] , size;
//     cout<<"enter the size of array :"<<endl;
//     cin>>size;

//     cout<<"enter the the elements of array "<<endl;

//     for(int i = 0; i< size; i++){
//         cin>>number[i];

//     }
//     ReverseArray(number , size);
//     for(int i = 0; i< size; i++){
//         cout<<number[i]<<" ";

//     }
//     return 0;
// }



// ALTERNATE SWAP

// #include<iostream>
// using namespace std;

// int Swap(int arr[] , int size){
//     int i = 0;
//     while(i + 1 < size){
//         swap(arr[i] , arr[i + 1]);
//         i = i + 2 ;
//     }
// }
// int main() 
// {
//      int number[100] , size;
//     cout<<"enter the size of array :"<<endl;
//     cin>>size;

//     cout<<"enter the the elements of array "<<endl;

//     for(int i = 0; i< size; i++){
//         cin>>number[i];
//     }

//     Swap(number , size);
//     for(int i = 0; i< size; i++){
//         cout<<number[i]<<" ";

//     }
    
//     return 0;
// }


//FINDING UNIQUE ELEMENT 

// #include<iostream>
// using namespace std;

// void Unique(int arr[]  , int size){
//     int ans = 0;
//     for(int i = 0 ; i < size ; i++){
//          ans = ans^arr[i] ;
//     }
//     if (ans) cout<<ans<<" is unique ";
// }
// int main() 
// {
//     int number[100] , size;
//     cout<<"enter the size of array :"<<endl;
//     cin>>size;

//     cout<<"enter the the elements of array "<<endl;

//     for(int i = 0; i< size; i++){
//         cin>>number[i];
//     }

//     Unique(number , size);
    
//     return 0;
// }


//DUPLICATE 

// #include<iostream>
// using namespace std;

// void duplicate(int arr[]  , int size){
//     int count = 0 , ans ;
//     for(int i = 0 ; i < size ; i++){
//         for(int j = 0 ; j < size ; j++ ){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//             if(count == 2 )
//                 {ans = arr[i];
//                 }
//         }
//     }
//     if (count >= 1) cout<<ans<<" is duplicate "<<endl;
// }
// int main() 
// {
//     int number[100] , size;
//     cout<<"enter the size of array :"<<endl;
//     cin>>size;

//     cout<<"enter the the elements of array "<<endl;

//     for(int i = 0; i< size; i++){
//         cin>>number[i];
//     }

//     duplicate(number , size);
    
//     return 0;
// }



//INTERSECTION 

#include<iostream>
using namespace std;

int Intersection(int arr[], int arr2[] , int a,int b){
    int i = 0, j = 0 , num = 0 ;
    while(i < a && j < b ){
           if(arr[i] == arr2[j]){
                cout<<" "<<arr[i];
                i++;
                j++;
                
            }
           else if(arr[i] > arr2[j]){
                j++;
                
           }
             else {
                i++;
            }
            //   cout<<"ans " <<num<<" "<<endl;
        }
    }

int main() 
{
    int number1[100], number2[100] , a , b;
    cout<<"enter the size of array1 :"<<endl;
    cin>>a;

    cout<<"enter the size of array2 :"<<endl;
    cin>>b;

    cout<<"enter the the elements of array1 "<<endl;

    for(int i = 0; i< a; i++){
        cin>>number1[i];
    }

    cout<<"enter the the elements of array2 "<<endl;

    for(int i = 0; i< b; i++){
        cin>>number2[i];
    }
    Intersection(number1 , number2 , a , b);

    return 0;
}