def minimumBribes(q):
    # Write your code here
    bribes = 0
    for i, origin in enumerate(q):
        cur = i + 1
        if origin - cur > 2:
            print("Too chaotic")
            return
        
        for k in q[max(origin - 2, 0):i]:
            if k > origin:
                bribes += 1
    print(bribes)