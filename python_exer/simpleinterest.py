def simpleinterset(p,r,t):
    pro=(p*r*t)/100;
    return pro 

if __name__=='__main__':
    p=int(input("P>"))    
    r=int(input("R>"))
    t=int(input("T>"))
    
    print(simpleinterset(p,r,t))