// //out place

// #include<iostream>
// using namespace std;

// int main(){
//     int matrix[10][10] = {{1,2,3},{4,5,6},{7,8,9}};
//     cout<<"The given Matrix before the rotation "<<endl;

//     for(int i = 0 ; i < 3 ;  i++){
//         for(int j = 0; j < 3 ; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<"The matrix after the rotation is :-> "<<endl;

//     int new_matrix[10][10];

//       for(int i = 0 ; i < 3 ;  i++){
//         for(int j = 0; j < 3 ; j++){
//             new_matrix[j][i] = matrix[i][j];
//         }
//     }

//     for(int i = 0; i < 3 ; i++){
//         int row_start  = 0 , row_end = 2;
//         while(row_end >= row_start){
//             swap(new_matrix[i][row_start] , new_matrix[i][row_end]);
//             row_end--;
//             row_start++;
//         }
//     }

//     for(int i = 0 ; i < 3 ;  i++){
//         for(int j = 0; j < 3 ; j++){
//             cout<<new_matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// IN place

#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int row_start = 0, row_end = 2;
        while (row_end >= row_start)
        {
            swap(matrix[i][row_start], matrix[i][row_end]);
            row_end--;
            row_start++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}