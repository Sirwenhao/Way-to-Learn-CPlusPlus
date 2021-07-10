# 题目：利用递归方法求5!。

def step_m(n):
    a = 1
    for i in range(1, n+1):
        a *= i
    return a
print(step_m(5))