'''
question is finding the sum of n numbers inputted
from the user 
input an number n 
input n numbers sep by a single space in a line 
'''
##fasr input using stdin and stdout 

from sys import stdin ,stdout 

def main():
    n =stdin.readline()
    arr =[int(x) for x in stdin.readline().split()]

    ## initialize variables 
    summation =0
    ##calc the sum 
    for i in arr:
        sum=sum+i

if __name__ == '__main__':
    main()

