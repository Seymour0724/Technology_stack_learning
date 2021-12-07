"""
827.最大的人工岛
    给你一个大小为 n x n 二进制矩阵grid 。最多只能将一格0变成1 。
    返回执行此操作后，grid中最大的岛屿面积是多少？
    岛屿由一组上、下、左、右四个方向相连的 1 形成。
"""

from six.moves import xrange

def largestIsland(grid):
    n = len(grid)
    if n==1: return 1
    #这里定义了一个点的“上下左右”的移动方式
    move = {
        "up": lambda x,y:(x-1,y),
        "down":lambda x,y:(x+1,y),
        "left":lambda x,y:(x,y-1),
        "right":lambda x,y:(x,y+1)
    }
    def one_len(row,col):
        area = {(row,col)}
        stack = [(row,col)]
        while stack:
            row, col = stack.pop()
            for next_step in move:
                nr, nc = move[next_step](row,col)
                if (nr,nc) not in area and 0<=nr<n and 0<=nc<n and grid[nr][nc]:
                    stack.append((nr,nc))
                    area.add((nr,nc))
        return len(area)
    ans = 0
    has_zero = False
    for ri, row in enumerate(grid):
        for ci, element in enumerate(row):
            if element == 0:
                has_zero = True
                grid[ri][ci] = 1
                ans = max(ans,one_len(ri,ci))
                grid[ri][ci] = 0
    return ans if has_zero else n*n

def largestIsland2(grid):
    N = len(grid)

    def check(r, c):
        seen = {(r, c)}
        stack = [(r, c)]
        while stack:
            r, c = stack.pop()
            for nr, nc in ((r-1, c), (r, c-1), (r+1, c), (r, c+1)):
                if (nr, nc) not in seen and 0 <= nr < N and 0 <= nc < N and grid[nr][nc]:
                    stack.append((nr, nc))
                    seen.add((nr, nc))
        return len(seen)

    ans = 0
    has_zero = False
    for r, row in enumerate(grid):
        for c, val in enumerate(row):
            if val == 0:
                has_zero = True
                grid[r][c] = 1
                ans = max(ans, check(r, c))
                grid[r][c] = 0

    return ans if has_zero else N*N


def largestIsland(grid):
    N = len(grid)
    def neighbors(r, c):
        for nr, nc in ((r-1, c), (r+1, c), (r, c-1), (r, c+1)):
            if 0 <= nr < N and 0 <= nc < N:
                yield nr, nc

    def dfs(r, c, index):
        ans = 1
        grid[r][c] = index
        for nr, nc in neighbors(r, c):
            if grid[nr][nc] == 1:
                ans += dfs(nr, nc, index)
        return ans
    area = {}
    index = 2
    for r in xrange(N):
        for c in xrange(N):
            if grid[r][c] == 1:
                area[index] = dfs(r, c, index)
                index += 1

    ans = max(area.values() or [0])
    for r in xrange(N):
        for c in xrange(N):
            if grid[r][c] == 0:
                seen = {grid[nr][nc] for nr, nc in neighbors(r, c) if grid[nr][nc] > 1}
                ans = max(ans, 1 + sum(area[i] for i in seen))
    return ans

li = [1,2,3,4,5]
li.insert()

if __name__ == "__main__":
    grid = [[1,0,1],[1,0,0],[0,1,0]] 
    print(largestIsland(grid))