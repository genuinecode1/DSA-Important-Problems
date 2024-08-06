

/*

Author :- Aditya Mani Tripathi
leetcode username - genuine_code
email - aadiitripathii46@gmail.com
institute - UIET CSJM UNIVERSITY KANPUR

*/



// code :-




class Solution {
    private:
    bool isSafe(vector<string>& board,int row,int col,int n){
        //check straight movement
            int x = row;
            int y = col;

            while(y>=0){
                if(board[x][y] =='Q')
                  return false;
                y--;
            }
        //check upper diagonal
           x = row;
           y = col;

           while(x >= 0 && y>=0){
               if(board[x][y] =='Q')
                 return false;
                x--;
                y--; 
           }

        //check lower diagonal
         x = row;
         y = col;
        
        while(x<n && y>=0){
           if(board[x][y] =='Q')
             return false;
            x++;
            y--; 
        }
       
       return true;
    }
    void solve(vector<string>& board,vector<vector<string>>& ans,int n,int col){
            //base case
            if(col==n){
                //answer store
                ans.push_back(board);
                //return
                return ;
            }

            for(int row=0;row<n;row++){
                if(isSafe(board,row,col,n)){

                    //action
                        board[row][col] ='Q';

                    //recursive call
                        solve(board,ans,n,col+1);

                    //backtracking
                        board[row][col]='.';
                }
            }
            return;
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            board[i].push_back('.');
        }
        vector<vector<string>> ans;
        int col = 0;
        solve(board,ans,n,col);

        return ans;
    }
};
