'''
Python code to show how lists work 
'''

'''
defn:
    using a list i will store all the leap years in them from 0 to 
    the given number of years 
'''

def leap_years(t):
    list1=[]
    for i in range(0,t+1):
        if (i%4==0 and i%100!=0) or (i%400==0):
            list1.append(i)
    return list1

def main():
    t=int(input()) ##the number of testcases 
    while(t>0):
        print("-------=========---------")
        h=int(input())
        print(leap_years(h))
        print("--------========---------")
        t-=1

if __name__=='__main__':
    main()