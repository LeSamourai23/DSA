def MergeSort(lst):

    if (len(lst) > 1):
        mid = len(lst)//2

        left = lst[:mid]
        right = lst[mid:]

        MergeSort(left)
        MergeSort(right)

        i = j = k = 0

        while (i < len(left) and j < len(right)):

            if (left[i] <= right[j]):
                lst[k] = left[i]
                i += 1

            else:
                lst[k] = right[j]
                j += 1

            k += 1

        while i < len(left):
            lst[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            lst[k] = right[j]
            j += 1
            k += 1


arr = [64, 34, 25, 12, 22, 11, 90]

n = len(arr)

MergeSort(arr)

print(arr)
