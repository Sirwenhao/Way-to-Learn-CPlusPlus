# 题目：求1+2!+3!+...+20!的和

l = []
def step_m(n):
    a = 1
    for i in range(1, n+1):
        a *= i
    return a
for j in range(1, 21):
    l.append(step_m(j))
#print(l)
total = sum(l)
print('1! + 2! + 3！+ ... + 20！= %d' % total)
