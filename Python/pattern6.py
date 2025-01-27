# This is pentagon shape python-program
for i in range(0,11,1):

    for j in range(5,i,-1):
        print(" ",end="")

    for h in range(0,i,1):
        if i<=5:
            print("*",end=" ")
        else:
            break

    for o in range(6,i,-1):
        if i>0:
            print("*",end=" ")
        else:
            break

    for l in range(6,i,1):
        print(" ",end="")
    
    for k in range(11,i,-1):
        if i>5:
            print("*",end=" ")
        else:
            break

    for s in range(5,i,1):
        print("*",end=" ")

    for e in range(0,i,1):
        if i<=5:
            print("*",end=" ")
        else:
            break
    
    for f in range(11,i,-1):
        if i>5:
            print("*",end=" ")
        else:
            break

    print("",end="\n")