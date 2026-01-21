


// QUES 3 :--> SUM OF ARRAY

#include <iostream>
#include <vector>
using namespace std;

void SUM_ARRAY(int num1[], int n1, int num2[], int n2)
{
    int i = n1 - 1, j = n2 - 1, sum = 0, carry = 0;
    while (i >= 0 && j >= 0)
    {
        if (n1 > n2)
        {
            sum = (num1[i] + num2[j]) % 10;
            carry = (num1[i] + num2[j]) / 10;
            num1[i] = sum;

            if (carry)
            {
                num1[i - 1] += carry;
            }
            i--;
            j--;
        }
        if (n2 > n1)
        {
            sum = (num1[i] + num2[j]) % 10;
            carry = (num1[i] + num2[j]) / 10;
            num2[j] = sum;

            if (carry)
            {
                num2[j - 1] += carry;
            }
            i--;
            j--;
        }
        else {
            sum = (num1[i] + num2[j]) % 10;
            carry = (num1[i] + num2[j]) / 10;
            num2[j] = sum;

            if(carry){
                int num3[n1 + 1];
                num3[0] = carry;
            }
        }
    }
}

int main()
{
    int A[] = {19,2,3,4};
    int B[] = {12 , 19 , 19};                                                           //PENDING   
    for (int i = 0; i < 4; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 1; i++)
    {
        cout << B[i] << " ";
    }

    cout << endl;
    SUM_ARRAY(A, 4, B, 1);

    for (int i = 0; i < 4; i++)
    {
        cout << A[i] << " ";
    }
}







