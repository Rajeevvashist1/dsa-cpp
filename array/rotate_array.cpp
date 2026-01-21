// //QUES 1 :--> ROTATE AN ARRAY :-->>

#include<iostream>
using namespace std;

void ROTATE(int num[] , int max , int  k){
    int num2[max];
   for(int i = 0 ; i < max ;i++){
    num2[i] = num[i] ;
   }
   for(int i = 0 ; i < max ; i++ ){
    num[(i+k) % max] = num2[i];
   }

}
int main(){
    int num[] = {1,2,3,4,5,6};
    cout<<"before rotating "<<endl;
    for(int i = 0 ; i < 6 ; i++){
        cout<<num[i] <<" ";
    }
   ROTATE(num ,6 , 1);
    cout<<"after rotating  "<<endl;
    for(int i = 0 ; i < 6 ; i++){
        cout<<num[i] <<" ";
    }
}