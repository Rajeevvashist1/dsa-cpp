// #include<iostream>
// using namespace std;
// int main() 
// {
//     // fibboonaciii series 
//     int n;
//     cin>>n;
//     int b = 1 ;
//     int a = 0 ;
//     int nextnumber;
//     cout<<"0 , 1 ,";
//     for(int i = 0; i <= n;i++)
// {
//     nextnumber = a + b ;
//     a = b;
//     b= nextnumber;
//     cout<<nextnumber<<" ,";
// }
//     return 0;
// }


// 1.1

// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n ;
//     cin>>n;
//     int sum = 0  , prod  =1 , digit;
//     while(n){
//     digit = n%10;
    
//     sum += digit ;
//     prod *= digit;
//     n = n / 10;
// }
// cout<<"the diff bw the sum and product of the given integer is equal to: "<<prod - sum;
//     return 0;
// }


//  number of 1 bit 
// #include<iostream>
// using namespace std;
// int main() 
// {
//     int n ;
//     cin>>n;

//     int ans = 0;
//     while(n){
        
//         if(n&1){
//             ans += 1;
//         } 
//         n = n>>1;
//     }
//     cout<<"the number of 1 in n is :->"<<ans;
//     return 0;
// }


