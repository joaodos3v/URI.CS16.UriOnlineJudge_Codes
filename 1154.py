count = 0
media = 0.0
x = int(input())
while x >= 0:
    media += x
    count += 1
    x = int(input())

r = media / count
print("%.2f" % r)
