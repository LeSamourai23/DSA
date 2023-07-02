#include <iostream>

#define N 4

void PrintMaze(int Maze[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << Maze[i][j]<<" ";
        }
        std::cout << std::endl;
    }
}

bool isValid(int Maze[N][N], int x, int y)
{
    return (x >= 0 && y >= 0 && x < N && y < N && Maze[x][y] == 1);
}

bool MazeUtil(int Maze[N][N], int x, int y, int Sol[N][N])
{
    if (x == N - 1 && y == N - 1)
    {
        Sol[x][y] = 0;
        return true;
    }

    if (isValid(Maze, x, y))
    {
        Sol[x][y] = 1;

        if (MazeUtil(Maze, x + 1, y, Sol))
        {
            return true;
        }

        if (MazeUtil(Maze, x, y + 1, Sol))
        {
            return true;
        }

        Sol[x][y] = 0;

        return false;
    }
    return false;
}

void solveMaze(int Maze[N][N])
{
    int Sol[N][N] = {0};

    if (MazeUtil(Maze, 0, 0, Sol))
    {
        std::cout<<"The path is: "<<std::endl;
        PrintMaze(Sol);
    }
    else
    {
        std::cout<<"The Maze is impossible to traverse through";
    }
}

int main()
{
    int maze[N][N] = {{1, 0, 0, 0},
                      {1, 1, 0, 1},
                      {0, 1, 0, 0},
                      {1, 1, 1, 1}};

    solveMaze(maze);

    return 0;
}