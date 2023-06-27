N=4

def Transpose(lst):

    for i in range(N):

        for j in range(i+1, N):

            lst[i][j], lst[j][i] = lst[j][i], lst[i][j]


A = [[1, 1, 1, 1],
     [2, 2, 2, 2],
     [3, 3, 3, 3],
     [4, 4, 4, 4]]
  
Transpose(A)

for i in range(N):
    for j in range(N):
        print(A[i][j], " ", end='')
    print()

