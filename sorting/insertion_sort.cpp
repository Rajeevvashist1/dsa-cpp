#include<iostream>
using namespace std;

void INSERTIONSORT(int num[] , int max){

    int i = 1 ; 
    while(i < max){
        int j = i - 1;
        int temp = num[i] ;

        while(j >= 0){
            if(num[j] > temp){
                num[j + 1] = num[j] ;
                j--;
            }
            else break;
            
        }
        num[j + 1] = temp;
        i++;
    }
}

int main(){
    int num[] = {4 , 11 , 6 , 0 , 9 , 1 ,  -1 , 999 , -999 };
    INSERTIONSORT(num , 9);
    for(int  i =  0 ;  i < 9; i++){
        cout<<num[i] <<" ";
    }
}