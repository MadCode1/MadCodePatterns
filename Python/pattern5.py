# This is simple diamond pattern python-program (notice reduced 1 for loop in this code)
for i in range(0,11,1):

    for j in range(5,i,-1):
        print(" ",end="")

    for y in range(0,i,1):
        if i<=4:
            print("x",end=" ")
        else:
            break

    for x in range(5,i,1):
        print(" ",end="")
    
    for u in range(10,i,-1):
        if i>=5:
            print("x",end=" ")
            

    print("x",end="\n")