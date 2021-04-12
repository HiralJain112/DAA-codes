#Program to calculate maximum sub array sum from a given array using divide and conquer algorithm

def MaxSum(arr, left_index, right_index):
 
    if right_index == left_index:
        return arr[left_index]
 
    mid = (left_index + right_index) // 2
 
    leftMax = float('-inf')
    Sum_of_sub = 0
    for i in range(mid, left_index - 1, -1):
        Sum_of_sub += arr[i]
        if Sum_of_sub > leftMax:
            leftMax = Sum_of_sub
 
    rightMax = float('-inf')
    Sum_of_sub = 0       
    for j in range(mid + 1, right_index + 1):
        Sum_of_sub += arr[j]
        if Sum_of_sub > rightMax:
            rightMax = Sum_of_sub
 
    maxLeftRight = max(MaxSum(arr, left_index, mid), MaxSum(arr, mid + 1, right_index))
 
    return max(maxLeftRight, leftMax + rightMax)
 
 
if __name__ == '__main__':
 
    arr = [-2,-5,6,-2,-3,1,5,-6]
    print("The Maximum sum of the subarray = ", MaxSum(arr, 0, len(arr) - 1))
 
