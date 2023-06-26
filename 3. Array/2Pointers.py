def TwoSum(arr, n, x):

    i = 0
    j = n-1

    while (i < j):

        if (arr[i]+arr[j] == x):
            return 1
        elif (arr[i]+arr[j] < x):
            i += 1
        else:
            j -= 1

    return 0


arr = [2, 3, 5, 8, 9, 10, 11]

val = 17

res = TwoSum(arr, len(arr), val)

if(res==1):
    print("The Sum exists")
else:
    print("Sum does not exist")

