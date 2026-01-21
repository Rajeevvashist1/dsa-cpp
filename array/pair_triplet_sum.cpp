// // PAIR SUM

// #include <iostream>

// using namespace std;

// void FindPairsum(int num[], int max, int sum)
// {
//     int i = 0;
//     int k = 0 ;
//     while (i < max)
//     {
//         int j = i + 1;
//         while (j < max)
//         {
//             if (num[i] + num[j] == sum)
//             {
//               if(num[i] > num[j]){
//                   cout << num[j] << " " << num[i] << endl;
//                   j++;
//               }
//               else {
//                   cout << num[i] << " " << num[j] << endl;
//                   j++;
//               }
//             }
//             else  j++;
//         }
//         i++;
//     }
// }
// int main()
// {
//     int num[50], max, sum;

//     cout << "enter the size of your array " << endl;
//     cin >> max;

//     cout << "enter the elements of the array " << endl;
//     for (int i = 0; i < max; i++)
//     {
//         cin >> num[i];
//     }
//     cout << "enter the sum  " << endl;
//     cin >> sum;
//     FindPairsum(num, max, sum);

//     return 0;
// }

// TRIPLET SUM

// PAIR SUM

// #include <iostream>

// using namespace std;

// void FindPairsum(int num[], int max, int sum)
// {
//     int i = 0;
//     while (i < max)
//     {
//         int j = i + 1;
//         while (j < max)
//         {
//             int k = i + 2;
//             while (k < max)
//             {
//                 if(num[i] + num[j] + num[k] == sum){
//                     cout << num[i] << " " << num[j] <<" "<<num[k]<< endl;
//                     k++;
//                 }
//                 k++;
//                 j++;
//             }
//             j++;
//         }
//         i++;
//     }
// }

// int main()
// {
//     int num[50], max, sum;

//     cout << "enter the size of your array " << endl;
//     cin >> max;

//     cout << "enter the elements of the array " << endl;
//     for (int i = 0; i < max; i++)
//     {
//         cin >> num[i];
//     }
//     cout << "enter the sum  " << endl;
//     cin >> sum;
//     FindPairsum(num, max, sum);

//     return 0;
// }