def funcs(n:int):
    ans:bool=False
    count:int =0
    for i in range(2,1000):
        if (n%i!=0 and  n!=i):
            ans=True
            continue        
        else :
            ans=False
            break 
    if(ans):
        return  "True"
    else:
        return "False"         
    

if __name__=='__main__':
    i =int(input())
    print(funcs(i))
