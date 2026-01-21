
// QUES 2  :--> cheCK AN ARARY IS ROTATED AND SORTED

#include <iostream>
using namespace std;

int CHECK(int num[], int max)
{
    int count = 0;
    for (int i = 0; i < max; i++)
    {

        if (num[i] > num[i + 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int num[] = {4,5,1,8,3};
    int res = CHECK(num, 5);
    if (res == 1)
    {
        cout << "YES! sorted and Rotated array";
    }
    else
        cout << "no!";
}