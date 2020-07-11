def contains(arr,num):
    for n in arr:
        if n== num:
            print("Exists!")
            break
    else:
        print("Does not exist")

if __name__=='__main__':
    contains([1,2],1)
    contains([1,2],2)
    contains([1,2],3)
    contains([1,2],312341)
    
