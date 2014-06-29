#!/usr/bin/python
# -*- coding: utf-8 -*-
#
#  server.py

import RPi.GPIO as GPIO
import subprocess
import time
import serial
from random import randint

port = serial.Serial("/dev/ttyACM0", baudrate=9600, timeout=0)
PATH=[4]
PATH.append("/var/www/node/residenz/War_Boom1.mp3")
PATH.append("/var/www/node/residenz/War_Boom4.mp3")
PATH.append("/var/www/node/residenz/War_Boom2.mp3")
PATH.append("/var/www/node/residenz/War_Boom3.mp3")

def main():
    count = 0
    while True:
        value=0
        line = port.readlines()
        if( len(line)!= 0 and count < 4 ):
          try:
            job=subprocess.Popen(["mpg321", returnPath()], stdin=subprocess.PIPE)
            time.sleep( float(line[0])/10 )
          except:
            print("cant play soundfile")

def returnPath():
    x = randint(1,4)
    return PATH[x]

if __name__ == '__main__':
    main()
