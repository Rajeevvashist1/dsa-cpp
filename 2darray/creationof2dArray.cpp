#include <iostream>
using namespace std;

int main() {
    int My2DArray[10][10];
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3; j++){
            int x;
            cin>>x;
            My2DArray[i][j] = x ;
        }
    }

    cout<<"Printing the 2D Array\n";

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3; j++){
            cout<<My2DArray[i][j]<<"  ";
        }
        cout<<"\n";
    }

    // by coloumn method 

    // for(int j = 0 ; j < 4 ; j++){
    //     for(int i = 0 ;i < 3 ;i++){
    //         cin>>My2DArray[j][i];
    //     }
    // }

    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ;j < 4 ;j++){
    //         cout<<My2DArray[j][i]<<"  ";
    //     }
    //     cout<<endl;
    // }


    //SEARCHING IN ARRAY 

    int key;
    cout<<"Enter the element to search in 2d array"<<endl;
    cin>>key;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            if(My2DArray[i][j] == key){
                cout<<"element found at ( "<<i<<" , "<<j<<" )"<<endl;
                return 0;
            }

        }
    }
    return 0;
}

