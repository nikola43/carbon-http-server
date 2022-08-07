// Your First C++ Program

#include <iostream>

#include "http/http_server.h"
using namespace std;

int main() {
  std::cout << "Hello World!";

  HttpServer httpServer = HttpServer();
  httpServer.run();
  return 0;
}
