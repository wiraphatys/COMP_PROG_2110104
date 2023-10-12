def flip(arr, i):
    start = 0
    while start < i:
        temp = arr[start]
        arr[start] = arr[i]
        arr[i] = temp
        start += 1
        i -= 1


def findMax(arr, n):
    mi = 0
    for i in range(0, n):
        if arr[i] > arr[mi]:
            mi = i
    return mi


def pancakeSort(arr, n):
    curr_size = n
    while curr_size > 1:

        mi = findMax(arr, curr_size)

        if mi != curr_size - 1:

            flip(arr, mi)
            if mi != 0:
                printArray(arr, n)

            flip(arr, curr_size - 1)
            printArray(arr, n)
        curr_size -= 1


def printArray(arr, n):
    for i in range(0, n):
        print("%d" % (arr[i]), end=" ")
    print('')


n = int(input())
arr = [int(e) for e in input().split()]
printArray(arr, n)
pancakeSort(arr, n)
