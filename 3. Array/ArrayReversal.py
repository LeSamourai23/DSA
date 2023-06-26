def ReverseArray(lst, n):

    l=0
    r=n-1

    while(l<r):

        lst[l], lst[r] = lst[r], lst[l]
        l+=1
        r-=1

arr = [64, 34, 25, 12, 22, 11, 90]

n = len(arr)

ReverseArray(arr, n)

print(arr)