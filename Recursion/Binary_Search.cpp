#include <iostream>
using namespace std;

bool Binary_Search(int array[], int s, int e, int key)
{

    int mid = s + ((e - s) / 2);
    if (s > e)
        return false;
    if (array[mid] == key)
        return true;
    else
    {
        if (array[mid] > key)
            return Binary_Search(array, s, mid - 1, key);
        else
            return Binary_Search(array, mid + 1, e, key);
    }
}

int main()
{
    int array[] = {1, 23, 56, 78, 90, 788, 900};
    bool ans = Binary_Search(array, 0, 6, 901);
    if (ans)
        cout << "Yes key is present" << endl;
    else
        cout << "No key is not there" << endl;
}