#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>nums(n ,1);

    nums[0] = nums[1] = 0;
    for(int i = 2; i < sqrt(n) ; i++){
        if(nums[i] == 1){
            int count = 2;
            for(int j = i * 2; j < n ; j += i){
                nums[j] = 0;
            }
        }
    }

    for(int i = 0 ; i < n; i++) if(nums[i] == 1)  cout<<i<<endl;
        
            
}