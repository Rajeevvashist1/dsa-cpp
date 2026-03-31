// //BUBBLE SORT  // SORTING BY SWAPING AND SETTING GREATEST ELEMENT AT CORRECT POSISTION   -->>

#include<iostream>
using namespace std ;

int BUBBLESORT(int num[] , int max){
    for(int i = 0 ; i < max ; i++ ){
        for(int j = 0 ; j < max - i ; j++){
            if(num[ j ] > num[j  + 1]){
                swap(num[j] , num[j + 1]);
            }
            else {
                continue;
            }
        }
    }
}

int main(){
    int num[] = {5,2,3,4,1};
    BUBBLESORT(num , 5);

    for(int i = 0 ; i < 5 ; i++ ){
        cout<<num[i]<<" ";
    }
}


// #include<iostream>
// #include<algorithm>

// using namespace std;

// int main(){
//     int array[] = {5,2,3,4,1};
//     int i = 0;
//     while(i < 5){
//         int j = 0;
//         while(j < 5 - i){
//             if(array[j] > array[j + 1]) {
//                 swap(array[j] , array[j + 1]);
//                 j++;
//             }
//             else {
//                 j++;
//             }
//         }
//         for(int k = 0; k < 5 ; k++){
//         cout<<array[k]<<" ";
//     }
//     cout<<endl;
//         i++;
//     }

    
// }