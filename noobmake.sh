#!/bin/bash
g++ -c http/http_server.cpp -o http/HttpServer.o
g++ -c main.cpp -o main.o
g++ http/HttpServer.o main.o -o main
./main