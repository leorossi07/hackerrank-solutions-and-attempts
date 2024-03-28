from heapq import heapify, heappop, heappush 
def cookies(k, A):
    # Write your code here
    heapify(A)
    op = 0
    
    while len(A) > 1 and A[0] < k:
        least = heappop(A)
        second_least = heappop(A)
        calc = least + 2 * second_least
        heappush(A, calc)
        heapify(A)
        op += 1
    
    if A[0] < k:
        return -1
    
    return op