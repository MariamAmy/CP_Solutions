n, m = map(int, input().split())
a = ((10 ** n) - 1) // m * m   # divide by m to get the floor division and 
                               # then multiply by m again to get the n-digit multiple of m  
print([-1, a] [a > 0])         # print a if a > 0 else print -1