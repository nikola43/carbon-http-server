

bazel run //explorer -- main.carb


g++ -c http_server.cpp -o HttpServer.o
g++ -c main.cpp -o main.o
g++ HttpServer.o main.o -o main