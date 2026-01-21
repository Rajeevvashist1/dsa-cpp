// FIRST AND LAST OCCURENCE OF AN ELEMENT ;->

#include <iostream>
using namespace std;

void Occurence(int num[], int max, int key)
{
    int start = 0, last = max - 1;
    int mid = start + (last - start) / 2;
    int num1, num2;
    while (start <= last)
    {
        if (num[mid] == key)
        {
            if (num[mid + 1] == key)
            {
                start = mid + 1;
                num1 = mid + 1;
            }
            if (num[mid - 1] == key)
            {
                last = mid - 1;
                num2 = mid - 1;
            }
        }
        else if (num[mid] < key)
        {
            start = mid + 1;
        }
        else if (num[mid] > key)
        {
            last = mid - 1;
        }
        mid = start + (last - start) / 2;
    }
    cout << "the first occurence of the key is at " << num2 << endl;
    cout << "the second occurence of the key is at " << num1 << endl;
}

int main()
{
    int num[5] = {1, 2, 3, 3, 5};
    Occurence(num, 5, 3);
}

