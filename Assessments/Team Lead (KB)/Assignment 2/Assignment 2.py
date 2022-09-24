import winsound
import random
import time

cnt=0
while cnt!=20:
    temp = random.randint(0, 100)
    if temp>60:
        print("Detected temperature: "+str(temp)+"°C")
        freq = 3000
        dur = 1000
        winsound.Beep(freq,dur)
    cnt+=1