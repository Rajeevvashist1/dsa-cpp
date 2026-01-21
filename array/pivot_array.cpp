//PIVOT IN ARRAY BY O(N) COMPLEXITY


// #include<iostream>
// using namespace std;

// int PivotinArray(int num[] , int max){
//     for(int i = 0 ; i < max - 1; i++){
//         if(num[i] > num[i + 1]){
//             return i + 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int num[7] = { 20 , 30 , 40 , 50 , 60 , 70 , 10};
//     int PIVOT =  PivotinArray(num , 7);
//     cout<<"Pivot found at index "<<PIVOT<<endl;
//     return 0;
// }