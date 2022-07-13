// Check if the place is in board or not
bool inBoard(int x,int y, int xMax, int yMax){
    if(x>=0 && y>=0 && x<xMax && y<yMax){
        return true;
    }
    return false;
}

// Check if the place has not been visited and not a bomb
bool isNotVisitedAndisNotBomb(char visited, char BombBoard){
    if(visited!='X'&&BombBoard!='O'){
        return true;
    }
    return false;
}


vector<string> bomberMan(int n, vector<string> grid) {
    if(n==1 or n==0){
        return grid;
    }
    else if(n%2 == 0){
        // Maybe has a better way to do so.
        int countElement = grid[0].size();
        string fills = "";
        for(int i=0;i<countElement;i++){
            fills += "O";
        }
        fill(grid.begin(),grid.end(),fills);
        return grid;
    }
    else{
        vector<string> visit = grid;
        int xMax = grid.size();
        int yMax = grid[0].size();
        //if the element is 0, set the up, down, left, right to .
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == 'O' && visit[i][j]!='X'){
                    //up
                    if(inBoard(i-1, j, xMax, yMax)){
                        if(isNotVisitedAndisNotBomb(visit[i-1][j], grid[i-1][j])){
                            grid[i-1][j] = 'O';
                            visit[i-1][j] = 'X';
                        }
                    }
                    //down
                    if(inBoard(i+1, j, xMax, yMax)){
                        if(isNotVisitedAndisNotBomb(visit[i+1][j], grid[i+1][j])){
                            grid[i+1][j] = 'O';
                            visit[i+1][j] = 'X';
                        }
                    }
                    //left
                    if(inBoard(i, j-1, xMax, yMax)){
                        if(isNotVisitedAndisNotBomb(visit[i][j-1], grid[i][j-1])){
                            grid[i][j-1] = 'O';
                            visit[i][j-1] = 'X';
                        }
                    }
                    //right
                    if(inBoard(i, j+1, xMax, yMax)){
                        if(isNotVisitedAndisNotBomb(visit[i][j+1], grid[i][j+1])){
                            grid[i][j+1] = 'O';
                            visit[i][j+1] = 'X';
                        }
                    }
                    grid[i][j] = 'O';
                    visit[i][j] = 'X';
                }
            }
        }
        // if n is bigger than 3...
        // reverse the grid;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='.'){
                    grid[i][j] = 'O';
                }
                else{
                    grid[i][j] = '.';
                }
            }
        }
        // 3 7 11 ... is same kind of solution
        // 5 9 13 ... is another same kind of solution
        // means when 5, it calculate the result using 3's answer to make another result
        /*
          6 7 X
          .......
          ...O.O.
          ....O..
          ..O....
          OO...OO
          OO.O...
          6 7 3 Result
          OOO.O.O
          OO.....
          OO....O
          .......
          .......
          .......
          6 7 5 Result
          .......
          ...O.O.
          ...OO..
          ..OOOO.
          OOOOOOO
          OOOOOOO
          6 7 7 Result
          OOO.O.O
          OO.....
          OO....O
          .......
          .......
          .......
          
        */
        if((n - 3)%4 == 0){
            return grid;
        }
        else{
            return bomberMan(n-2,grid);
        }
    }

}
