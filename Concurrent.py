import time
import threading
from threading import Thread

def threadfunction():
    print("Hello World")
    time.sleep(5)
    print("Bye World")

def threadfunction2():
    print("Hello World 2")
    print("Bye World 2")

if __name__ == "__main__":
    x = Thread(target=threadfunction)
    y = Thread(target=threadfunction2)
    x.start()
    y.start()
    x.join()
    y.join()
