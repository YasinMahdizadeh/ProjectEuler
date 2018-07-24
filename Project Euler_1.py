sum = 0
for i in range(1,21) :
    if i % 3 == 0 :
        sum = sum + i
        print ( "ahaa! it's = " , i )
        print ( " ---> Now sum is:" , sum)
    elif i % 5 == 0 :
        sum = sum + i
        print ( "ahaa! it's = " , i )
        print ( " ---> Now sum is:" , sum)
print (sum)
