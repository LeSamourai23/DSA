import numpy as np

m = int(input("Enter row size: "))
n = int(input("Enter column size: "))

print("Enter entries: ")

entries = list(map(int, input().split()))

matrix = np.array(entries).reshape(m, n)

print(matrix)

k=input("press close to exit") 

