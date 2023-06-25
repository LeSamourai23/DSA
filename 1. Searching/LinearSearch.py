def LinearSearch(a, lst, n):

    for i in range(0, n):
        if (lst[i] == a):
            return i
    return -1


faveNumbers = [7, 33, 13, 9, 29]

key = 13

length = len(faveNumbers)-1

result = LinearSearch(key, faveNumbers, length)

if (result == -1):
    print("Number not found")
else:
    print("Number found at index: ", result)
