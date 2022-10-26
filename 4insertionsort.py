def isort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1
        while j >= 0 and key < arr[j] :
                arr[j + 1] = arr[j]
                j -= 1

        arr[j + 1] = key

n= int(input("Enter the no. of element : "))
arr= []
print("Enter the elements :")
for i in range(0,n):
    arr.append(int(input()))

print("Given array : ")
print(arr)
print()
isort(arr)
print("Sorted Array : ")
print(arr)

# def printArray(arr):
# 	for i in range(len(arr)):
# 		print(arr[i], end=" ")
# 	print()