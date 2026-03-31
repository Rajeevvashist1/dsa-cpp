#include<iostream>
#include<vector>
using namespace std;

void Merge(int *arr , int s , int e){
    int mid = s + ((e - s) / 2);
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int  k = s;
    for(int i = 0; i < len1; i++) arr1[i] = arr[k++];
    k = mid + 1;
    for(int i = 0; i < len2; i++) arr2[i] = arr[k++];

    vector<int> new_Array;
    int index1 = 0 , index2 = 0;
    while(index1 < len1 && index2 < len2){
        if(arr1[index1] < arr2[index2]){
            new_Array.push_back(arr1[index1]);
            index1++;
        }
        else {
            new_Array.push_back(arr2[index2]);
            index2++;
        }
    }
    while(index1 < len1) {
        new_Array.push_back(arr1[index1]);
        index1++;
    }
    while(index2 < len2){
        new_Array.push_back(arr2[index2]);
        index2++;
        }

        k = s;
        for(int i = 0; i < new_Array.size(); i++){
            arr[k++] = new_Array[i];
        }
     
    
}
void Merge_Sort(int *arr , int s , int e){
    //Base Case
    if(s >= e) return;

    int mid = s + ((e - s) / 2);

    Merge_Sort(arr , s , mid);
    Merge_Sort(arr , mid + 1 , e);
    Merge(arr , s , e);

}

int main(){
    int array[] = {56,2,34,78,1,0};
    Merge_Sort(array , 0 , 5);
     for(int  i = 0; i < 6 ; i++) cout<<array[i]<<" ";
}