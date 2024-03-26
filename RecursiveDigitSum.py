def sum_of_numbers_in_string(n):
    if int(n) < 10:
        return n
    else:
        s = sum(int(x) for x in str(n))
        return sum_of_numbers_in_string(s)
        
def superDigit(n, k):
    # Write your code here
    result = k * sum_of_numbers_in_string(int(n))
    return sum_of_numbers_in_string(result)