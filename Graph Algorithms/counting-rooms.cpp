#include<bits/stdc++.h>
 
 
using namespace std;
int n,m;
char grid[1005][1005];
bool visited[1005][1005];
int currSize;
 
void floodfill(int x, int y, char c){
    if(x>=n || x<0 || y<0 || y>=m || visited[x][y] || grid[x][y]!= c) return;
    visited[x][y] = true;
    currSize++;
    floodfill(x,y+1,c);
    floodfill(x,y-1,c);
    floodfill(x+1,y,c);
    floodfill(x-1,y,c);
}
 
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
 
    cin>>n>>m;
    for(int i =0 ;i < n; ++i){
        for(int j =0 ; j < m ; ++j){
            cin>>grid[i][j];
            visited[i][j] = false;
        }
    }
    int rooms=0;
    for(int i =0 ;i < n ; ++i){
        for(int j= 0 ;j < m ; ++j){
            if(!visited[i][j]&&grid[i][j]=='.'){
                currSize = 0;
                floodfill(i,j,'.');
                rooms++;
            }
        }
    }
 
    cout<<rooms;
 
    return 0;
}
