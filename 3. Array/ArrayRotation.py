def Rotate(lst, n):
    k = lst.index(r)
    mod_lst = []
    mod_lst = lst[k+1:]+lst[0:k+1]
    return mod_lst


arr = [64, 34, 25, 12, 22, 11, 90]

n = len(arr)

r = 2

arr = Rotate(arr, r)

print(arr)
