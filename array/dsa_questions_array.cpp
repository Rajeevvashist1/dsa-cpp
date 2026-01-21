// #include<iostream>
// using namespace std;

// void swapalt(int num[] , int max ){
//     cout<<"swaping the alternate no  of array "<<endl;

//     for(int i = 0 ; i < max ; i = i + 2){
//        if(i + 1 < max ){
//          swap(num[i] , num[i+1]);
//        }
//     }

//     cout<<"alternate swapped";

// }

// void printarry(int num[] , int max ){
//     for(int i = 0 ; i < max ; i++){
//         cout<<num[i]<<endl;
//     }
// }

// int main(){
//     int num[50] , max ;

//     cout<<"enter the size of your array "<<endl;
//     cin>>max;

//     cout<<"enter the elements of the array "<<endl;
//     for(int i = 0 ; i < max ; i++){
//         cin>>num[i];
//     }
//     cout<<"printing before swaping "<<endl;
//     printarry(num , max);

//     swapalt(num , max);

//     cout<<"printing afterswaping "<<endl;
//     printarry(num , max);

//     return 0;
// }

// FINDING UNIQUE

// #include<iostream>
// using namespace std;

// int FindUnique(int num[] , int max ){
//     int ans = 0;
//     for(int i = 0; i < max ; i++){
//         ans = ans^num[i];
//     }

//     return ans;
// }

// void printarry(int num[] , int max ){
//     for(int i = 0 ; i < max ; i++){
//         cout<<num[i]<<endl;
//     }
// }

// int main(){
//      int num[50] , max ;

//     cout<<"enter the size of your array "<<endl;
//     cin>>max;

//     cout<<"enter the elements of the array "<<endl;
//     for(int i = 0 ; i < max ; i++){
//         cin>>num[i];
//     }

//     int unique = FindUnique(num ,  max);

//     cout<<"the unique element is : "<<unique<<endl;

//     return 0;
// }

// UNIQUE NUMBER OF OCCURENCE

// PENDING ...........................->>>>>>>>>>>>>>>>

//

// DUPLICATE IN ARRAY ->|

// #include<iostream>
// using namespace std;

// void Duplicate(int num[] , int max ){

//     for(int i = 0; i < max; i++){
//         int ans = num[i];
//         int count = 0;
//         for(int j = 0 ; j < max ;j++){
//             if(ans == num[j]){
//                 count++;
//             }
//         }
//         if(count > 1){
//             cout<<num[i]<<" is the duplicate element "<<endl;
//             exit(0);
//         }
//     }
// }

// int main(){
//      int num[50] , max ;

//     cout<<"enter the size of your array "<<endl;
//     cin>>max;

//     cout<<"enter the elements of the array "<<endl;
//     for(int i = 0 ; i < max ; i++){
//         cin>>num[i];
//     }

//     Duplicate(num ,  max);

//     return 0;
// }

// ALL DUPLICATE -->>

// #include<iostream>
// using namespace std;

// void Duplicate(int num[] , int max ){

//     for(int i = 0; i < max; i++){
//          int count = 0;
//         int ans = num[i];
//         for(int j = 0 ; j < max ;j++){
//             if(ans == num[j]){
//                 count++;
//             }
//         }
//         if(count >1){
//             cout<<num[i]<<" is duplicate element "<<endl;
//         }
//     }
// }

// int main(){
//      int num[50] , max ;

//     cout<<"enter the size of your array "<<endl;
//     cin>>max;

//     cout<<"enter the elements of the array "<<endl;
//     for(int i = 0 ; i < max ; i++){
//         cin>>num[i];
//     }

//     Duplicate(num ,  max);

//     return 0;
// }

//
// INTERSECTION OF TWO ARRAY

// #include <iostream>
// using namespace std;


// int FindInterct(int num[], int num2[], int N, int M)
// {

//     int res[50], count = 0;
//     int i = 0, j = 0;

//     while (i < N && j < M)
//     {
//         int ans = num[i];
//         if (num[i] < num2[j])
//         {
//             i++;
//         }
//         else if (ans == num2[j])
//         {
//             cout << num2[j]<<endl;
//             i++;
//             j++;
//         }
//         else j++;
//     }
// }
// int main()
// {
//     int num[50], num2[50], N, M;

//     cout << "enter the size of your 1st array " << endl;
//     cin >> N;
//     cout << "enter the size of your 2nd array " << endl;
//     cin >> M;

//     cout << "enter the elements of the 1st array " << endl;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> num[i];
//     }

//     cout << "enter the elements of the 2nd array " << endl;
//     for (int i = 0; i < M; i++)
//     {
//         cin >> num2[i];
//     }

//     FindInterct(num, num2, N, M);

//     return 0;
// }