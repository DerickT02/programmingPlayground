from cgi import test


def insertionSort(arr):
    temp = 0
    for i in range(1, len(arr)):
        j = i
        while j > 0 and arr[j] < arr[j - 1]:
            temp = arr[j]
            arr[j] = arr[j - 1]
            arr[j - 1] = temp
            j -= 1

    return arr

def insertionSortForShells(arr):
    temp = 0
    for i in range(1, len(arr)):
        j = i
        while j > 0 and arr[j] < arr[j - 1]:
            temp = arr[j]
            arr[j] = arr[j - 1]
            arr[j - 1] = temp
            j -= 1

    return arr


def shellSort(arr):
    pass
    




test_array = [20,22,37,30,34,64,43,35,66]
print(insertionSort(test_array))