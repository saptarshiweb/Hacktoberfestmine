import pyqrcode 
import png 
from pyqrcode import QRCode 

s = input("Enter string to make it QR: ")

url = pyqrcode.create(s) 
url.png('myqr.png', scale = 10)
