def MaxContSum(lst, n):

    currentSum = float('-inf')
    maxSum = 0

    start = 0
    end = 0

    for i in range(0, n):

        currentSum += lst[i]

        if (currentSum > maxSum):
            maxSum = currentSum
            end = i

        if (currentSum < 0):
            currentSum = 0
            start = i+1

    subarray = arr[start: end+1]
    
    return subarray, maxSum


arr = [-2, -3, 4, -1, -2, 1, 5, -3]
n = len(arr)

print(MaxContSum(arr, n))
