// main.cpp
#include <fmt/core.h>
#include <spdlog/spdlog.h>
#include <sqlite3.h>

#include <cstdio>

// main function!
int main() {
  fmt::print("Hello, world!\n");
  fmt::print("{}\n", sqlite3_libversion());
  spdlog::info("spdlog: Hello World!");
  return 0;
}
