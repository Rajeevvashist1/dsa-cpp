//BINARYSEARCH -->>


#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key){
    int start = 0;
    int end = size - 1 ;
    int mid = start + (end - start)/2 ;

    while( start <= end ) {
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
        else if (arr[mid] > key){
            end = mid - 1;
        }

        mid = start + (end - start)/2 ;

    }
    return -1 ;
}
int main() 
{
    int even[8] = { 2 , 4 , 6 , 8 , 10 , 12 , 14 , 16} ;
    int odd[5] = {2 , 3 , 4 , 5 , 6} ;
    
    int res1 = binarysearch(even , 8 , 20);
    int res2 = binarysearch(odd , 5 , 29);
    cout<<" In the even array 20 is present at the index =  "<<res1<<endl;
    cout<<" In the odd array 29 is present at the index =  "<<res2 ;

    return 0;
}