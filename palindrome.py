def palindromeIndex(s):
 # Write your code here
    n = len(s)
 
    if s == s[::-1]:
        return -1
    for i in range(len(s)):
        if s[i] != s[n-1-i]:
            temp_s = s[:i] + s[i+1:]
            if temp_s == temp_s[::-1]:
                return i
    return -1

