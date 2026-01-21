

// SORT 1 , 0  ;

// #include<iostream>
// using namespace std;

// void Sort(int num[] , int max){
//     int i = 0 , j = max - 1 ;
//     while(i <= j){
//         if(num[i] == 0){
//             i++;
//         }
//         else if(num[j] == 1){
//             j--;
//         }
//         else if(num[i] == 1 && num[j] == 0){
//             swap(num[i] , num[j]);
//         }
//     }
// }

// void Printarray(int arr[] , int max){
//     for(int i = 0 ; i < max ; i++){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){

//     int arr[8] = {1,1,1,1,0,0,0,0};
//     Sort(arr , 8);
//     Printarray(arr , 8);
// }

// SORT 0 , 1 , 2-->>>

#include <iostream>
using namespace std;

void Sort(int num[], int max)
{
    int  i = 0 , mid = 0, k = max - 1;
    while(mid <= k){
        if(num[mid] == 0){
            swap(num[mid] , num[i]);
            i++ , mid++;
        }
        else if(num[mid] == 1){
            mid++;
        }
        else if(num[k] == 2){
            k--;
        }
        else if(num[mid] = 2 ){
            swap(num[mid] , num[k]);
        }
        else mid++;
    }
}

void Printarray(int arr[], int max)
{
    for (int i = 0; i < max; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[8] = {0,0,2,2,0,2,1,0};
    Sort(arr, 8);
    Printarray(arr, 8);
}