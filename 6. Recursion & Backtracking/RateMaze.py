def print_solution(solution):
    for row in solution:
        print(' '.join(map(str, row)))

def is_valid(maze, x, y):

    return x >= 0 and x < len(maze) and y >= 0 and y < len(maze[0]) and maze[x][y] == 1


def solve_maze_util(maze, x, y, solution):
    
    if x == len(maze) - 1 and y == len(maze[0]) - 1:
        solution[x][y] = 1
        return True

    if is_valid(maze, x, y):
        solution[x][y] = 1

        if solve_maze_util(maze, x + 1, y, solution):
            return True

        if solve_maze_util(maze, x, y + 1, solution):
            return True

        solution[x][y] = 0
        return False

    return False

def solve_maze(maze):
    solution = [[0] * len(maze[0]) for _ in range(len(maze))]  

    if solve_maze_util(maze, 0, 0, solution):
        print("Solution exists. Path:")
        print_solution(solution)
    else:
        print("No solution exists.")

maze = [
    [1, 0, 0, 0],
    [1, 1, 0, 1],
    [0, 1, 0, 0],
    [1, 1, 1, 1]
]

solve_maze(maze)
