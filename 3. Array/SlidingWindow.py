def MaxSum(lst, n, k):

    if(n<k):
        print("Error")

    maxSum= sum(lst[0:k])

    windowSum=maxSum;

    for i in range(k, n):
        windowSum+=lst[i]-lst[i-k]
        maxSum= max(windowSum, maxSum)

    return maxSum

arr = [1, 4, 2, 10, 2, 3, 1, 0, 20]
k = 4
n = len(arr)

print(MaxSum(arr, n, k))

    
    
