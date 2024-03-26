def gridChallenge(grid):
    # Write your code here
    grid = [list(row) for row in grid]
    r = len(grid)
    c = len(grid[0])
    
    for i in range(r):
        grid[i].sort()
        
    for j in range(c):
        for i in range(1, r):
            if grid[i][j] < grid[i-1][j]:
                return "NO"
    return "YES"
    