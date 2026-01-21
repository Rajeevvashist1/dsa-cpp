// MOUNTAIN IN ARRAY

#include <iostream>
using namespace std;

int Mountain(int num[], int max)
{
    int start = 0, last = max - 1;
    int mid = start + (last - start) / 2;

    while (start <= last)
    {
        if (num[mid] > num[mid - 1] && num[mid] > num[mid + 1])
        {
            return mid;
        }
        else if (num[mid] > num[mid - 1])
        {
            start = mid + 1;
        }
        else if (num[mid] > num[mid + 1])
        {
            last = mid - 1;
        }
        mid = start + (last - start)/2;
    }
    return -1;
}

int main(){
    int num[4] = {3, 4, 5, 1};
    cout<<"the peak element in the array is "<<num[Mountain(num , 4) ]<<endl;
    return 0;
}