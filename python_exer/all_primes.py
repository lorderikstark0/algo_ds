import math 
def allprimes(n):
    if n==1:
        return False

    for i in range(2,(int)(math.sqrt(n))+1):
        if n % i==0:
            return False 
    return True     

if __name__=='__main__':
    n1=int(input(">"))
    n2=int(input(">"))
    print(allprimes(n1))
    print(allprimes(n2))