#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<vector<int>>& maze, vector<vector<int>>& visited ,int n , int m , int newx, int newy){

    if(newx <= n - 1 && newy <= m - 1 && newx >= 0 && newy >= 0 && visited[newx][newy] == 0 && maze[newx][newy] == 1) return true;
    else return false;

}

void solve(vector<vector<int>>& maze, vector<vector<int>>& visited ,int n , int m , int x, int y , vector<string>& Sol , string path){
    
    visited[x][y] = 1;

    if(x == n - 1 && y == m - 1){
        Sol.push_back(path);
        return;
    }

    

    //down 
    int newx = x + 1;
    int newy = y;
    if(isPossible(maze , visited , n , m , newx , newy)){
        path.push_back('D');
        solve(maze , visited , n , m , newx , newy , Sol , path);
        path.pop_back();
    }

    //left 
    newx = x , newy = y - 1;
    if(isPossible(maze , visited , n , m , newx , newy)){
        path.push_back('L');
        solve(maze , visited , n , m , newx , newy , Sol , path);
        path.pop_back();
    }

    //right 
    newx = x , newy = y + 1;
    if(isPossible(maze , visited , n , m , newx , newy)){
        path.push_back('R');
        solve(maze , visited , n , m , newx , newy , Sol , path);
        path.pop_back();
    }

    //Up
    newx = x - 1 , newy = y;
    if(isPossible(maze , visited , n , m , newx , newy)){
        path.push_back('U');
        solve(maze , visited , n , m , newx , newy , Sol , path);
        path.pop_back();
    }
    visited[x][y] = 0;
}

int main(){
    int n , m;
    cout<<"enter number of rows in your maze"<<endl;
    cin>>n;

    cout<<"enter number of coloumns in your maze"<<endl;
    cin>>m;

    
    vector<vector<int>> maze(n, vector<int>(m, 0));
    vector<vector<int>> visited(n, vector<int>(m, 0));


    cout<<"Enter your maze : "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>maze[i][j];
        }
    }

    if(maze[0][0] == 0) {
        cout<<"No Solution :"<<endl;
        return 0;
    }
    vector<string> Sol;
    string path = "";
    //makling a visited matrix and initilaising with 0

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            visited[i][j] = 0;
        }
    }

    cout<<"your maze : "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < m; j++){
            cout<<maze[i][j]<<" ";
        }
        cout<<endl;
    }

    
    cout<<"Solution for this Maze is: "<<endl;

    solve(maze , visited,n , m  , 0 , 0 , Sol , path);
    for(int i = 0; i < Sol.size() ; i++){
        cout<<Sol[i];
    }
    cout<<endl;

}