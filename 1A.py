import math

n, m, a  = tuple(int(i) for i in input().strip().split(" "))
print(math.ceil (n/a) * math.ceil(m/a))
