
#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H

class HttpServer {
 public:
  int serverSocket;
  int clientSocket;

  void run();
  HttpServer();
  void setHttpHeader(char httpHeader[]);
  void report(struct sockaddr_in* serverAddress);
};

#endif  // HTTP_SERVER_H