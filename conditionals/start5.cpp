// #include<iostream>
// using namespace std;

// int factorial(int n ){
//     int ans = 1;
//     for(int i = 1; i <= n; i++){
//         ans = ans * i;
//     }
//     return ans;
// }
// int nCr(int n , int r){
//     int numerator = factorial(n);
    
//     int denominator = factorial(r)*factorial(n - r);

//     int ans = numerator / denominator ; 
//     return ans ; 
// }
// int main() 
// {
//     int n , r;
//     cin >> n >> r;

//     int ans = nCr(n , r);
//     cout<<"the answer is"<<ans<<endl;

//     return 0;
// }



// PRIME OR NOT 

// #include<iostream>
// using namespace std;

// void isPrime(int n ){
//     int flag = 1;
//     for(int i = 2; i < n ; i++){
//         if(n % i == 0){
//             flag = 0;
//             break;
//         }
//     }
//     if(flag){
//         cout<<"the given number "<<n<<" is prime ."<<endl;
//     }else{
//         cout<<"the given number "<<n<<" is not prime ."<<endl;
//     }

// }
// int main() 
// {
//     int n ;
//     cin>>n;
//     isPrime(n);
//     return 0;
// }

//3..   CALCULATOR

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int a , b ;
//     char ch;
//     cout<<"enter your 1st number . "<<endl;
//     cin>> a ;
//     cout<<"enter your operation to perform "<<endl;
//     cin>> ch ;
//     cout<<"enter your 2nd number . "<<endl;
//     cin>> b ;
    

//     switch (ch) {
//         case '+' :
//             cout<<"your result is "<<a+b<<endl;
//             break;
//             case '-' :
//             cout<<"your result is "<<a-b<<endl;
//             break;
//             case '*' :
//             cout<<"your result is "<<a*b<<endl;
//             break;
//             case '/' :
//             cout<<"your result is "<<a/b<<endl;
//             break;
//             case '%' :
//             cout<<"your result is "<<a%b<<endl;
//             break;
//             default : 
//             cout<<"still learning try another operation ";
//     }
//     return 0;
// }


//4... notes of ruppeee

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int amount ,a ,b ,c ,d ,e ,f ,g ,h ;
//     cout<<"enter your amount : "<<endl;
//     cin>>amount ;

//     a = amount / 2000;
//     amount = amount % 2000;
//     cout<<"the no. of notes of 2000 for your money is "<<a<<endl;
//     b = amount / 500;
//     amount = amount % 500;
//     cout<<"the no. of notes of 500 for your money is "<<b<<endl;
//     c = amount / 200;
//     amount = amount % 200;
//     cout<<"the no. of notes of 200 for your money is "<<c<<endl;
//     d = amount / 100;
//     amount = amount % 100;
//     cout<<"the no. of notes of 100 for your money is "<<d<<endl;
//     e = amount / 50;
//     amount = amount % 50;
//     cout<<"the no. of notes of 50 for your money is "<<e<<endl;
//     f = amount / 20;
//     amount = amount % 20;
//     cout<<"the no. of notes of 20 for your money is "<<f<<endl;
//     g = amount / 10;
//     amount = amount % 10;
//     cout<<"the no. of notes of 10 for your money is "<<g<<endl;
//     h = amount / 1;
//     amount = amount % 1;
//     cout<<"the no. of notes of 1 for your money is "<<h<<endl;
//     return 0;
// }

//  5... is even
// #include<iostream>
// using namespace std;

// void isEven(int n ){
//     if(n&1){
//         cout<<"the entered number is odd ";
//     }
//     else{
//         cout<<"the number is even ";
//     }
// }
// int main() 
// {
//     int n ;
//     cout<<"enter your number to check even "<<endl;
//     cin>>n;
//     isEven(n);
//     return 0;
// }


//6...nCr...

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int ans = 1;
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     else{
//     for(int i = 1; i<= n; i++){
//         ans = ans*i ;
//     }
//     return ans;
// }
// }

// int nCr(int n , int r){
//     return  factorial(n)/(factorial(r)*factorial(n-r)) ;
// }
// int main() 
// {
//     int n , r;
//     cout<<"enter the value of n and r "<<endl;
//     cin>>n >>r;
//     cout<<"the nCr of "<<n<<" and "<<r<<" is "<<nCr(n , r)<<endl;
//     return 0;
// }


//7...  o/p - total number of bit 

//  #include<iostream>
//  using namespace std;
 
//  int BitCount(int n){
//     int bit , count = 0;
//     for(int i = 0 ; i <32 ; i++){
//         bit = n & 1;
//         if(bit){
//             count++;
//         }
//         n = n>>1;
//     }
//     return count;
//  }
//  int main() 
//  {  
//     int a , b;
//     cout<<"enter the two numbers :"<<endl;
//     cin>>a >>b;
//     int ans = BitCount(a) + BitCount(b);
//     cout<<"the number of 1 bit in two numbers is "<<ans<<endl;
//      return 0;
//  }


//8 .... last number of AP

// #include<iostream>
// using namespace std;

// void lastterm(int a , int n , int d){
//     int An = a + (n-1)*d ;
//     cout<<"the "<<n<<" term of given ap is :"<<An<<endl;
// }
// int main() 
// {
//     int n , a , d;
//     cout<<"enter your 1st term of ap : "<<endl;
//     cin>>a;
//     cout<<"enter your differnece of ap  : "<<endl;
//     cin>>d;
//     cout<<"enter your n for ap : "<<endl;
//     cin>>n;
//     lastterm(a ,n , d);
//     return 0;
// }

//9...max value or min. value in array

#include<iostream>
using namespace std;

int FindMax(int arr[] , int size){

        int max = 0;
        for(int i = 0; i < size ;i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;

}
int FindMin(int arr[] , int size){

    int min = 100000;
    for(int i = 0; i < size ;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;

}
int main() 
{

    int MaxMin[50] , size;
    cout<<"enter size of your array ";
    cin>>size;
    cout<<"enter elements to check max or min ";
    for(int i = 0 ; i < size; i++){
        cin>>MaxMin[i];
    }
    cout<<"the maximum value in the list is "<<FindMax(MaxMin , size)<<endl;
    cout<<"the minimum value in the list is "<<FindMin(MaxMin , size);
    return 0;
}