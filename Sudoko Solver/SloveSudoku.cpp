#include <bits/stdc++.h> 
#include <vector>
using namespace std;
bool issafe(int row, int col,vector<vector<int>>&grid,int val){

        for(int i=0; i<grid.size(); i++){
            //row check
            if(grid[row][i]==val){
                return false;
            }
            //col check
            if(grid[i][col]==val){
                return false;
            }
            //3*3 matrix check
            if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==val){
                return false;
            }
            
        }
        return true;
    }
    bool SolveSudoku(vector<vector<int>>&grid)  
    { 
        // Your code here
        int n=grid[0].size();
        for(int row=0; row<n ; row++){
            for(int col=0; col<n; col++){
                //cell empty
                if(grid[row][col]==0){
                    for(int val=1; val<=9; val++){
                    if(issafe(row,col,grid,val)){
                        grid[row][col]=val;
                        // recursive call
                        bool nextPossibleSolution=SolveSudoku(grid);
                        if(nextPossibleSolution){
                            return true;
                        }
                        else{
                            //backtrack
                            grid[row][col]=0;
                        }
                    }
                  }
                  return false;
                }
            }
        }
    }

// void solveSudoku(vector<vector<int>>& sudoku)
// {
//     SolveSudoku(sudoku);
// }
void print(vector<vector<int>> grid){
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}

int main(){
    vector<vector<int>> Sudoku={ { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

            if(SolveSudoku(Sudoku)){
                print(Sudoku);
            }
            else{
                cout<<"Solution Does not Exist"<<endl;
            }
            return 0;
}
