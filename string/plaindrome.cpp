#include<iostream>
using namespace std;

int COUNT(char ch[]){
    int count = 0;
    int i =0 ;
    while(ch[i]){
        count++;
        i++;
    }
return count;
}




int PALINDROME(char ch[] , int size){
     int  i = 0 , j = size - 1 , flag = 1;
     while(i <= j){
        if(ch[i] == ch[j]){
            i++;
            j--;
        }
        else return 0;
     }
     return flag;
}
int main(){
    char ch[30];
    cout<<"enter your name"<<endl;
    cin>>ch;

    int ans = COUNT(ch);
    
    int PALIN = PALINDROME(ch , ans);
    if(PALIN){
        cout<<" yes! Palindrome "<<endl;

    }
    else cout<<"no"<<endl;
    }






//CHECK PALINDROME  AND IGNORE SYMBOL :->>


                        //NOT COMPLETED