import os
import stat
from datetime import datetime, time
import time as tm
import random
filePath = "arena.txt"
while(True):
    tm.sleep(5)
    f = open(filePath, "w")
    f.write("Now,the,file,has,more" + str(random.randint(1, 100)) + ",1234\n")
    f.write("Now,the,file,has,more" + str(random.randint(1, 100)) + ",1234\n")
    print("checked")
    f.close()