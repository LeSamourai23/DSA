def BinarySearch(lst, l, r, key):

    if (l == r):
        print("Empty Array")
        
        return 0
    
    m= l+(r-l)//2

    if(lst[m]==key):
        print("Key found in the array at index", m)
        
        return 1
    
    if(lst[m]<key):
        BinarySearch(lst, m, r, key)

    else:
        BinarySearch(lst, l, m, key)


arr = [64, 34, 25, 12, 22, 11, 90]

arr.sort()

n = len(arr)

BinarySearch(arr, 0, n-1, 22)
