import heapq as hp 

stocks ={
  'Goog' : 520.54, 
    'FB' : 76.45, 
    'yhoo' : 39.28, 
    'AMZN' : 306.21, 
    'APPL' : 99.76
  } 
zipped_1 =zip(stocks.values(),stocks.keys())

print(sorted(zipped_1))

zipped_2=zip(stocks.keys() ,stocks.values())
print(sorted(zipped_2))
