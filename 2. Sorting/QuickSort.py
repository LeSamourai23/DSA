def partition(lst, low, high):

    pivot = lst[high]
    i = low-1

    for j in range(low, high):

        if (lst[j] < pivot):
            i += 1
            lst[i], lst[j] = lst[j], lst[i]

    lst[i+1], lst[high] = lst[high], lst[i+1]

    return (i+1)


def QuickSort(lst, low, high):

    if (low < high):
        pi = partition(lst, low, high)

        QuickSort(lst, low, pi-1)
        QuickSort(lst, pi+1, high)


arr = [64, 34, 25, 12, 22, 11, 90]

n = len(arr)

QuickSort(arr, 0, n-1)

print(arr)
