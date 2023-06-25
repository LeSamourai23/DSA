def InsertionSort(lst, n):

    for i in range(1, n):

        flag = lst[i]
        j = i-1

        while(j>=0 and lst[j]> flag):
            lst[j+1]= lst[j]
            j-=1

        lst[j+1]=flag 


arr = [64, 34, 25, 12, 22, 11, 90]

n = len(arr)

InsertionSort(arr, n)

print(arr)
