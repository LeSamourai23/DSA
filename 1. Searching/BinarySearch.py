def BinarySearch(a, arr, l, r):

    m = l + (r-l)//2

    while(l<=r):
        if(arr[m]==a):
            return m
        elif (arr[m]<a):
            l=m+1
        else:
            r=m-1

    return -1;

faveNumbers = [7, 33, 134, 990, 2900];

key = 134

n = len(faveNumbers)-1

result = BinarySearch(key, faveNumbers, 0, n)

if (result == -1):
    print("Number not found")
else:
    print("Number found at index: ", result)