




//FIND UNIQUE 

// #include<iostream>
// using namespace std;

// void Unique(int list[] ,  int size){ 
//     int value ;
//     for(int i = 0; i < size ; i++){
//         int  count = 0 ;
//         value = list[i] ;
//         for(int j = 0; j < size ;j++){
//            if(list[j] == value){
//                 count++;
//            }
    
//         }
//         if(count <= 1){
//             cout<<"The unique element in the list is "<<value<<endl;  
//         }

//     }
    
// }
// int main() 
// {
//     int arr[50] , size;
//     cout<<"enter the size of the arr :"<<endl;
//     cin>>size;
//     cout<<"enter elements in your list : "<<endl;
//     for(int i = 0; i < size ; i++){
//         cin>>arr[i];
//     }
//     Unique(arr , size);

//     return 0;
// }


//DUPLICATE   

#include<iostream>
using namespace std;

void DUPLICATE(int list[] ,  int size){ 
    int count = 0 ;;
    for(int i = 0; i < size ; i++){
        count = count^list[i];

        if(count = 0){
            cout<<list[i]<<" is duplicate";
        }
    }
    
}
int main() 
{
    int arr[50] , size;
    cout<<"enter the size of the arr :"<<endl;
    cin>>size;
    cout<<"enter elements in your list : "<<endl;
    for(int i = 0; i < size ; i++){
        cin>>arr[i];
    }
    DUPLICATE(arr , size);

    return 0;
}