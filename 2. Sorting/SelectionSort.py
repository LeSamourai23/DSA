def SelectionSort(lst, n):

    for i in range(0, n-1):
        
        min_flag=i

        for j in range(i+1, n):

            if(lst[j]<lst[min_flag]):
                min_flag=j;

        if(min_flag!=i):
            lst[min_flag], lst[i]= lst[i], lst[min_flag]

arr = [64, 34, 25, 12, 22, 11, 90]

n = len(arr)

SelectionSort(arr, n)

print(arr)

