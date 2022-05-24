

#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_sinks.h"
#include "spdlog/spdlog.h"
#include <iostream>
#include <unistd.h>

int main(int argc, char *argv[]) {
  std::cout << "Welcome to basic cmake project with gtest and spdlog"
            << std::endl;
  return 0;
}