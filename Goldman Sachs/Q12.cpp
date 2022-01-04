Question :  Find total number of Squares in a N*N chessboard
  
Solution:
int countSquares(int n)
{
    
    return (n * (n + 1) / 2) * (2*n + 1) / 3;
}
