def LastOccurance(arr,size,target):
    #Creating three Pointers to apply Binary Search
    start =0
    mid = 0
    end = size -1
    # I am using store and compute strategy to get answer
    store = -1

    while(start<=end):
        #calculating mid index
        mid = int((start + end)/2)

        if(arr[mid] == target):
            store = mid

            # as i need to find the last occurance that is definately in the right side of mid 
            # moving start pointer to next to mid
            start = mid + 1
        
        if(target<arr[mid]):
            start = mid + 1
        elif(target>arr[mid]):
            end = mid - 1

    return store

arr = [8,7,6,6,6,6,6,6,5,4,3,2,1]
size = len(arr)
target = 6

answer = LastOccurance(arr,size,target)

print(f"The Last Occurance of {target} is : {answer}th Element")



