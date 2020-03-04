#!/usr/bin/env python3
# Echo-client

import socket

HOST = '127.0.0.1'
PORT = 65432 # the port used by the server

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    s.sendall(b'My name is Shadow03. I want your access ...')
    data = s.recv(1024)

print("Received", repr(data))

