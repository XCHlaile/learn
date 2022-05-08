board = [["5","3",".",".","7",".",".",".","."]
        ,["6",".",".","1","9","5",".",".","."]
        ,[".","9","8",".",".",".",".","6","."]
        ,["8",".",".",".","6",".",".",".","3"]
        ,["4",".",".","8",".","3",".",".","1"]
        ,["7",".",".",".","2",".",".",".","6"]
        ,[".","6",".",".",".",".","2","8","."]
        ,[".",".",".","4","1","9",".",".","5"]
        ,[".",".",".",".","8",".",".","7","9"]]
class Solution:
    def isValidSudoku(self, board):
        row  = [[0]*10]*10
        line = [[0]*10]*10
        box = [[0]*10]*10
        for i in range(0,9):
            for j in range(0,9):
                    if board[i][j]=="." :
                            continue
                    index = ord(board[i][j])-ord('0')
                    print(i,j,index)
                    if (row[i][index] == 1 or line[j][index] == 1 or box[i // 3* 3 + j // 3][index] == 1):
                        return False
                    row[i][index] = 1
                    line[j][index] = 1
                    box[i // 3* 3 + j // 3][index] = 1
                    print(row[i][index],line[j][index],box[i // 3* 3 + j // 3][index])
        return True
a=Solution()
print(a.isValidSudoku(board))






