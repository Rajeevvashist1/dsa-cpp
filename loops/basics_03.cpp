// 1.  REVERSE INTEGER 

// #include<iostream>

// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;

//     int digit , ans =0;
//     while(n){
//         digit = n % 10; 
//         ans = (ans * 10) + digit;
//         if((ans < INT_MAX/10) | (ans > INT_MIN/10)){
//             return 0;
//         }
//         n = n/10;
//     }

//     cout<<ans;
//     return 0;
// }


//2nd PROBLEM  decimal  to binary 


// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() 
// {
//     int n;
//     cin>>n;

//     int  ans = 0;
//     int i = 0;
//     while(n){
//         int bit = n & 1;
//         ans = (bit * pow(10,i)) + ans;
//         n = n>>1;
//         i++;
//     }
//     cout<<"the decimal n in binary is :"<<ans;
//     return 0;
// }


