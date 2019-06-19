limit = 4000000
sum = 10
n1 = 2
n2 = 8
while ( sum < limit):
    even_number = 4 * n2 + n1
    n1 = n2
    n2 = even_number
    sum = sum + even_number

print(sum)
