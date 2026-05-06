#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i = s + 1; i <= e; i++){
        if(arr[i] < pivot) count++;
    }

    swap(arr[s + count] , arr[s]);

    int i = s, j = e;
    while(i < j){
        if(arr[i] > pivot && arr[j] < pivot) {
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
        else if(arr[i] < pivot) i++;
        else  j--;
    }
return s + count;
}

void Quick_Sort(int *arr, int s, int e){
    //base case;

    if(s >= e) return;

    int p = partition(arr,s,e);

    Quick_Sort(arr,s,p -1);
    Quick_Sort(arr , p + 1,e);
}

int main(){
    int arr[] = {90,1,5,4,2};

    cout<<"Before sorting"<<endl;
    for(int i = 0; i < 5; i++) cout<<i[arr]<<" ";
    cout<<endl;

    Quick_Sort(arr,0,4);

    cout<<"After sorting"<<endl;
    for(int i = 0; i < 5; i++) cout<<*(arr + i)<<" ";
    cout<<endl;
}

