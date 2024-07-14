# as i need to find total occurance so first i'll get first occurance then second occurance 
# then i will add first occurance (as indexed 1) and last occurance then add 1 to them to get total occurance

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
        
        if(target<arr[mid]):
            start = mid + 1

        elif(target>arr[mid]):
            end = mid - 1
    return store

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


# main code

arr = [8,7,7,6,6,6,6,6,6,5,4,3,2,1]
size = len(arr)
target = 2

Last_oc = LastOccurance(arr,size,target) # Getting first occurance index 

First_oc = FirstOcc(arr,size,target) # getting last occurance element

total_occ = Last_oc - First_oc + 1

print(f"The Total Occurance of {target} is : {total_occ}.")



