def BinarySearch(arr,size,target):
    # i am using 3 pointers to do binary search in which i'll match elements that is on mid index;
    # to get results fast i can also check elements on start,mid,end using if(|| ||)
    start = 0 
    mid = 0 
    end = size-1
    while start <= end:
        #calculating mid value
        mid = int((start + end)  / 2 ) # i am using this statement insted of start + end / 2 because for int range;

        # checking element is in mid or not

        if (arr[mid]==target):
            return True
            
        
        if(target > arr[mid]):
           start = mid + 1

        elif (target < arr[mid]):
            end = mid - 1

    return False

# main function
arr = [1,2,3,4,5,56,66,789,9900,10023]

size = len(arr)

target = 1002


answer = BinarySearch(arr,size,target)

if(answer):
  print("Yes found element ! \n")
else:
  print("Not Found :( \n")






