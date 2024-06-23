
def FirstOcc(arr,size,target):
    # Making ponters
    start= 0 
    mid = 0
    end = size-1
    # in this question i am using store and computer strategy to get answer
    store = -1

    while(start<=end):

        mid = int((start + end)/2)

        if(arr[mid] == target):
            store = mid # as we know that we have to find first element so we will move mid pointer to left

            end = mid - 1
        
        if(target<arr[mid]): end = mid - 1

        elif(target>arr[mid]): start = mid + 1
    return store

        
arr = [1,22,33,44,55,56,56,77,88,90,99,900]

size = len(arr)

target = 56

answer = FirstOcc(arr,size,target)
print(f"The first occurance is on {answer}th index. \n")