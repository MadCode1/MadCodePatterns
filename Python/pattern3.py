#This is simple pyramid pattern python-program 
for i in range(0,5,1):
    for j in range(5,i,-1):
        print(" ",end="")
    for k in range(0,i,1):
        print("*",end=" ")
    print("*",end="\n")
