def BubbleSort(lst, n):

    for i in range(n-1):

        swapped = False

        for j in range(i+1, n):

            if lst[j] < lst[i]:
                lst[j], lst[i]= lst[i], lst[j]
                swapped = True

        if (swapped == False):
            break


arr = [64, 34, 25, 12, 22, 11, 90]

n = len(arr)

BubbleSort(arr, n)

print(arr)
