def SubArray(lst, n):

    for i in range (0, n):

        for j in range (i, n):

            for k in range (i, j+1):

                print(lst[k])
                

            print("\n")


arr = [64, 34, 25, 12, 22, 11, 90]

n = len(arr)

SubArray(arr, n)