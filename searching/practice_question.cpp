// SEARCHING IN A ROATATED ARARAY ;-->.

// #include<iostream>
// using namespace std;

// int  PIVOTFIND(int num[], int max)
// {
//     int start = 0, end = max - 1;
//     int mid = start + (end - start) / 2;

//     while (start < end)
//     {
//         if (num[mid] >= num[0])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return start;
// }

// int Searching(int num[] , int max , int key ){
//     int start = 0 , end = max - 1;
//     int pivot = PIVOTFIND(num , max);
//     if(key >= num[0]){
//         end = pivot - 1;
//     }
//     if(key <= num[max - 1]){
//         start = pivot;
//     }

//     int mid = start + (end - start) / 2;
//     while(start <= end){
//         if(num[mid] == key){
//             return mid;
//         }
//         else if(num[mid] > key){
//             end = mid - 1;
//         }
//         else start = mid + 1;

//         mid = start + (end - start) / 2;

//     }
//     return mid;
// }

// int main(){
//     int num[] = {12, 15 , 18 , 2 ,4 };
//     int res = Searching(num , 5 , 2);
//     cout<<"element found at index "<<res<<endl;
// }// #include <iostream>
// using namespace std;

// void PIVOTFIND(int num[], int max)
// {
//     int start = 0, end = max - 1;
//     int mid = start + (end - start) / 2;

//     while (start < end)
//     {
//         if (num[mid] >= num[0])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid;
//         }
//         mid = start + (end - start) / 2;
//     }
//     cout << "pivot element is : " << num[start] << endl;
// }

// int main()
// {
//     int num[8] = {50, 60, 70, 80, 10, 20, 30, 40};
//     PIVOTFIND(num, 8);

//     return 0;
// }



// SQRT(X)

// #include <iostream>
// using namespace std;

// int SQRT(int max)
// {
//     int start = 1 , end = max;
//     int mid = start + (end - start) / 2;
//     int ans  = -1;
//     while(start <= end){
//         int num = mid * mid ;
//         if(num == max){
//         return mid;
//     }
//     else if(num < max){
//         ans = mid;
//         start = mid + 1;
//     }
//     else if(num > max){
//         end = mid - 1;
//     }
//     mid = start + (end - start) / 2;
//     }
//     return ans;

// }

// int main()
// {
//     int res = SQRT(8);
//     cout << "sqrt of 8 is " << res << endl;
// }


//SQRT IN DECIMAL PLACE :->>


#include <iostream>
using namespace std;

int SQRT(int max)
{
    int start = 1 , end = max;
    int mid = start + (end - start) / 2;
    int ans  = -1;
    while(start <= end){
        int num = mid * mid ;
        if(num == max){
        return mid;
    }
    else if(num < max){
        ans = mid;
        start = mid + 1;
    }
    else if(num > max){
        end = mid - 1;
    }
    mid = start + (end - start) / 2;
    }
    return ans;

}
int SQRTINDECiMAL(int num){
    int INT = SQRT(num);
    
}

int main()
{
    int res = SQRTINDECiMAL(8);
    cout << "sqrt of 8 is " << res << endl;
}
