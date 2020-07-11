def compound_interest(p,r,t):
    s=1+(p*r/100)
    p=pow(s,t)
    return p

if __name__=='__main__':
    p=int(input(">"))    
    r=int(input(">"))   
    t=int(input(">"))
    print(compound_interest(p,r,t))
    