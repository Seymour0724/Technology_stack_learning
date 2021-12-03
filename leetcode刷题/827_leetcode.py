"""
827.最大的人工岛
    给你一个大小为 n x n 二进制矩阵grid 。最多只能将一格0变成1 。
    返回执行此操作后，grid中最大的岛屿面积是多少？
    岛屿由一组上、下、左、右四个方向相连的 1 形成。
"""

def largestIsland(grid):
    n = len(grid)
    if n==1: return 1
    move = {
        "up": lambda x,y:(x-1,y),
        "down":lambda x,y:(x+1,y),
        "left":lambda x,y:(x,y-1),
        "right":lambda x,y:(x,y+1)
    }
    #这里定义一个五个空列表，对应0的重要性
    importance = [[] for _ in range(5)]
    #这里开始找出所有0元素的坐标
    row = 0
    while row < n:
        col = 0
        while col < n:
            print([row,col])
            cursor = 0
            if grid[row][col]==0:
                for lam in move:
                    check = move[lam](row,col)
                    if check[0]>=0 and check[1]>=0 and check[0]<n and check[1]<n:
                        if grid[check[0]][check[1]]==1:
                            cursor += 1
                importance[cursor].append([row,col]) 
            col += 1
        row += 1
    flag = 0
    for weight in range(4,-1,-1):
        if len(importance[weight])==0: continue
        else: 
            flag = weight
            break
    for point in importance[flag]:
        grid[point[0]][point[1]] = 1
        res = []
        i = 0
        while i<n:
            j=0
            while j<n:


    return importance

if __name__ == "__main__":
    grid = [[1,0,1],[1,0,0],[0,1,0]] 
    print(largestIsland(grid))